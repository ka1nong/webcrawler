#ifndef _BOOK_PARSE_H_
#define _BOOK_PARSE_H_

#include "../parseControl/parseBase.h"

class DwCtrl;
class BookParse : public ParseBase
{
public:
        BookParse();
        ~BookParse();
        virtual bool Parse();
        virtual  std::string DescriptionSelf();

private:
        DwCtrl* pDwCtrl;

private:
        static BookParse * s_instance;
};

#endif