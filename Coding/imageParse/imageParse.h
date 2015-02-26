#ifndef _IMAGE_PARSE_H_
#define _IMAGE_PARSE_H_
#include "../parseControl/parseBase.h"
#include <string>

class ImageParse : public ParseBase
{
public:
        ~ImageParse();
        virtual bool Parse();
        virtual  std::string DescriptionSelf();

private:
        static ImageParse* s_instance;
};

#endif