#ifndef  _PARSE_CTRL_H
#define _PARSE_CTRL_H

#include <vector>
#include <stddef.h>

class ParseBase;

class ParseCtrl
{
public:
        typedef std::vector<ParseBase*>::iterator iterator;
        static ParseCtrl* GetInstance();
        void  Attach(ParseBase* parse);
        void Detach(ParseBase* parse);
        iterator Begin();
        iterator End();
        iterator at(size_t index);

private:
        ParseCtrl();
        ParseCtrl(const ParseCtrl& rhs);
        ~ParseCtrl();

private:
        std::vector<ParseBase*>  m_parses;

private:
        static ParseCtrl* s_instance;
};

#endif