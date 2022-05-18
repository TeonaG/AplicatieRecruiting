#include "parser.h"
#include <QDebug>
parser*parser::instance=nullptr;

parser&parser::getInstance()
{
    if(instance==nullptr)
        instance=new parser();
    return*instance;
}

void parser::destroyInstance()
{
    if(instance!=nullptr)
    {
        delete instance;
        instance=nullptr;
    }
}

std::string parser::parse_string(std::vector<std::string> v,char delim)
{
    std::string str="";
    for(int i=0;i<v.size();i++)
    {
        str+=v[i];
        //qDebug()<<QString::fromStdString(str);
        if(i!=v.size()-1) str+=delim;
    }
    str[str.length()]=0;
    return str;
}

std::vector<std::string> parser::unparse_string(std::string str,char delim)
{
    std::vector<std::string> v;
        std::string cuv = "";
        int i = 0;
        auto start = 0u;
        auto end = str.find(delim);
        while (end != std::string::npos)
        {
            cuv = str.substr(start, end - start);
            v.push_back(cuv);
            start = end + 1;
            end = str.find(delim, start);
        }
        cuv = str.substr(start, end);
        v.push_back(cuv);

        return v;
}
