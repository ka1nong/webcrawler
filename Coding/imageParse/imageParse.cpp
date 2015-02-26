#include "imageParse.h"
#include <iostream>

 ImageParse* ImageParse::s_instance = new ImageParse();

 ImageParse::~ImageParse()
 {

 }
 
bool ImageParse::Parse()
{
        std::cout << "ImageParse:finding  " << m_resStr;
        return true;
}

std::string ImageParse::DescriptionSelf()
{
        return std::string("Search Image");
}