#ifndef _DOWNLOAD_CONTROL_H_
#define _DOWNLOAD_CONTROL_H_

#include<string>

class DwCtrl
{
public:
        bool GetWebpage (const std::string& url, int fd);
        bool GetResources(const std::string& url, const std::string& res, int fd);
};

#endif