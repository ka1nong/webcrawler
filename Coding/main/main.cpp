#include <iostream>
#include <string>

int main()
{
        
        std::cout << "Please enter  resources  regular expression:";
        std::string resStr;
        std::cin >> resStr;
        std::cout << "---------------start parse " << resStr << "-----------------------"  << std::endl;

        std::cout << "------------------------end--------------------------------------------" <<  std::endl;
        return 0;
}