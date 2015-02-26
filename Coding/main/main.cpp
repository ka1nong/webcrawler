#include <iostream>
#include <string>
#include  "../parseControl/parseCtrl.h"
#include "../parseControl/parseBase.h"

int main()
{
        ParseCtrl* parseCtrl = ParseCtrl::GetInstance();
        if (parseCtrl == NULL)
        {
                std::cout << "init error";
                return 0;
        }
        
        int count = 0;
        for (ParseCtrl::iterator iter = parseCtrl->Begin();
                iter != parseCtrl->End();
                iter++)
        {
                std::cout << ++count << ".  " << (*iter)->DescriptionSelf() << std::endl;
        }
        std::cout << "Please enter  search options(1 ~"  << count  << ")" << std::endl;
        int input = -1;
        std::cin >> input;
        if (input <= 0 && input > count)
        {
                std::cout << "input error";
                return 0;
        }

        ParseCtrl::iterator resIter = parseCtrl->at(input -1);
        std::cout << "Please enter  resources  regular expression:" << std::endl;
        std::string resStr;
        std::cin >> resStr;
        std::cout << "---------------start parse " << resStr << "-----------------------"  << std::endl;
        if ((*resIter)->Init(resStr, "./") == false)
        {
                std::cout << "parse init error";
                return 0;
        }

        if ((*resIter)->Parse() == false)
        {
                std::cout << "parse exec error";
                return 0;
        }

        std::cout << "------------------------end--------------------------------------------" <<  std::endl;
        return 0;
}