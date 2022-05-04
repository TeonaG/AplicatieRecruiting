#ifndef PARSER_H
#define PARSER_H
#include <vector>
#include <string>
#include "stdio.h"

class parser
{
private:
    static parser*instance;
    parser() {}
    virtual ~parser() {}
public:
    static parser&getInstance();
    static void destroyInstance();
    std::string parse_string(std::vector<std::string>,char);
    std::vector<std::string> unparse_string(std::string,char);
};

#endif // PARSER_H
