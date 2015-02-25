#ifndef  _PARSE_BASE_H_
#define _PARSE_BASE_H_

class ParseCtrl ;

class ParseBase
{
public:
        ParseBase(ParseCtrl*  pCtrl);
        virtual ~ParseBase();
        virtual Init() = 0;
        virtual Parse() = 0;
};

#endif 