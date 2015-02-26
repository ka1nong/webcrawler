#include "parseBase.h"
#include "parseCtrl.h"

ParseBase::ParseBase()
{
        ParseCtrl::GetInstance()->Attach(this);
}

ParseBase::~ParseBase()
{

}

bool ParseBase::Init(const std::string& res,  const std::string& savePath) 
{
        m_resStr = res;
        m_savePath = savePath;
        return true;
}