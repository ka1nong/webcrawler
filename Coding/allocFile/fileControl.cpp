#include "fileControl.h"
#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include <utility>
#include <sstream>
#include <stdio.h>

FileCtrl* FileCtrl::s_instance = NULL;

FileCtrl* FileCtrl::GetInstance()
{
        if (s_instance == NULL)
                s_instance = new FileCtrl();
        return s_instance;
}

FileCtrl::FileCtrl()
{
        m_fileName =  "./data";
        m_fileCount = 1;
}

FileCtrl::FileCtrl(const FileCtrl& rhs)
{

}

int FileCtrl::GetOnlyFile()
{
        std::string fileName = GetOnlyFileName();
        int fd = open(fileName.c_str(), O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
        m_fileMap.insert(std::pair<int, std::string>(fd, fileName));
        return fd;
}

std::string FileCtrl::GetOnlyFileName()
{
        std::ostringstream fileName ;
        fileName <<  m_fileName <<  m_fileCount++;

        while (access(fileName.str().c_str(), F_OK) != -1)
        {
                fileName .clear();
                fileName <<  m_fileName <<  m_fileCount++;
        }

        return fileName.str();
}
void FileCtrl::DeleteFile(int fd)
{
        std::map<int , std::string >::iterator iter;
        iter = m_fileMap.find(fd);
        if (iter == m_fileMap.end())
                return ;
        close(fd);
        remove(iter->second.c_str());
        m_fileMap.erase(iter);
}