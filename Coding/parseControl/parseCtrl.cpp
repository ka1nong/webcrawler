#include "parseCtrl.h"
#include <cstddef>

ParseCtrl* ParseCtrl::s_instance = NULL;

ParseCtrl* ParseCtrl::GetInstance()
{
        if (s_instance == NULL)
                s_instance = new ParseCtrl();
        return s_instance;
}

ParseCtrl::ParseCtrl()
{

}
ParseCtrl::ParseCtrl(const ParseCtrl& rhs)
{
        //not define
}

ParseCtrl::~ParseCtrl()
{
        for (iterator iter = m_parses.begin();
                iter != m_parses.end();
                iter++)
        {
                delete (*iter);
        }
}

 void ParseCtrl::Attach(ParseBase* parse)
 {
        m_parses.push_back(parse);
 }

void ParseCtrl::Detach(ParseBase* parse)
{
        for (iterator iter = m_parses.begin();
                iter != m_parses.end();
                iter++)
        {
                if (*iter == parse)
                {
                        m_parses.erase(iter);
                }
        }
}

ParseCtrl::iterator ParseCtrl::Begin()
{
        m_parses.begin();
}

ParseCtrl::iterator ParseCtrl::End()
{
        m_parses.end();
}

ParseCtrl::iterator ParseCtrl::at(size_t index)
{
        size_t i = 0;
        for (iterator iter = m_parses.begin();
                iter != m_parses.end();
                iter++, i++)
        {
                if (i == index)
                        return iter;
        }

        return m_parses.end();
}