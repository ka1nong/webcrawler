#include "ParseCtrl"

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
        for (auto iter = m_parses.begin();
                iter != m_parses.end();
                iter++)
        {
                delete *iter;
        }
}

 void ParseCtrl::Attach(ParseBase* parse)
 {
        m_parses.push_back(parse);
 }

void ParseCtrl::Detach(ParseBase* parse)
{
        for (auto iter = m_parses.begin();
                iter != m_parses.end();
                iter++)
        {
                if (*iter == parse)
                {
                        m_parses.erase(iter);
                }
        }
}

iterator ParseCtrl::Begin()
{
        m_parses.begin();
}

iterator ParseCtrl::End()
{
        m_parses.end();
}