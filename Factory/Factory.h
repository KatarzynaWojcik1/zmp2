#ifndef FACTORY_H
#define FACTORY_H

#include <string>
#include "../Log/Log.cpp"

class LogFactory {
public:
    LogFactory(){}
    Log* createLog_Factory(log_type type, std::string msg) ;
    ~LogFactory() {}
 
};

#endif // FACTORY_H