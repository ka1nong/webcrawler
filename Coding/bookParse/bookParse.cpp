#include "bookParse.h"
#include <iostream>
#include "../download/downloadControl.h"
#include "../allocFile/fileControl.h"

BookParse* BookParse::s_instance = new BookParse();

BookParse::BookParse()
{
        pDwCtrl = new DwCtrl;
}

BookParse::~BookParse()
{
        if (pDwCtrl)
                delete pDwCtrl;
}

bool BookParse::Parse()
{
        std::cout << "BookParse:finding  " << m_resStr << std::endl;
        std::string baiduSearch = "https://www.baidu.com/s?wd=" + m_resStr; 
        int fd = FileCtrl::GetInstance()->GetOnlyFile();
        if (pDwCtrl->GetWebpage(baiduSearch, fd) == false)
        {
                std::cout << "download resources error" << std::endl;
                FileCtrl::GetInstance()->DeleteFile(fd);
                return false;
        }

        FileCtrl::GetInstance()->DeleteFile(fd);
        return true;
}

std::string BookParse::DescriptionSelf()
{
        return std::string("Search Book");
}