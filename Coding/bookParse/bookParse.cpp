#include "bookParse.h"
#include <iostream>

BookParse* BookParse::s_instance = new BookParse();

BookParse::BookParse()
{

}

BookParse::~BookParse()
{

}

bool BookParse::Parse()
{
        std::cout << "BookParse:finding  " << m_resStr;
        return true;
}

std::string BookParse::DescriptionSelf()
{
        return std::string("Search Book");
}