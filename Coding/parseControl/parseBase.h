#ifndef  _PARSE_BASE_H_
#define _PARSE_BASE_H_
#include <string>

class ParseBase
{
public:
        ParseBase();
        virtual ~ParseBase();
        virtual bool Init(const std::string& res,  const std::string& savePath) ;
        virtual bool Parse() = 0;
        virtual  std::string DescriptionSelf() = 0;

protected:
        std::string m_resStr;
        std::string m_savePath;
};

#endif 