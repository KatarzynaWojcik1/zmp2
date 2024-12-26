#ifndef FACTORY_H
#define FACTORY_H

#include <string>
#include "../Log/Log.cpp"

// Log Factory class
class LogFactory {
public:
    LogFactory(){} // Constructor for the LogFactory class
    Log* createLog_Factory(log_type type, std::string msg); // Function to create a log object based on the log type
    ~LogFactory() {} // Destructor for the LogFactory class
 
};

#endif // FACTORY_H