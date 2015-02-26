#ifndef _FILE_CONTROL_H_
#define _FILE_CONTROL_H_
#include <string>
#include <map>

class FileCtrl
{
public:
        static FileCtrl* GetInstance();
        int GetOnlyFile();
        void DeleteFile(int fd);

private:
        FileCtrl();
        FileCtrl(const FileCtrl& rhs);
        std::string GetOnlyFileName();

private:
        std::string m_fileName;
        int m_fileCount;
        std::map<int, std::string> m_fileMap;

private:
        static FileCtrl* s_instance;
};

#endif