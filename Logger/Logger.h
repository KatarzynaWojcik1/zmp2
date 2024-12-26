#ifndef LOGGER_H
#define LOGGER_H

#include <vector>
#include <iostream>
#include "../Log/Log.cpp"
#include "../Factory/Factory.h"

// Logger class definition
class Logger {
public:
    // Get the singleton instance of Logger
    static Logger& getInstance();
    
    // Create and store a log message
    Log* getMsg(log_type type, std::string msg);
    
    // Display all logged messages
    void showlogs();

private:
    // Private constructor to prevent instantiation
    Logger(){};
    
    // Private destructor
    ~Logger(){};
    
    // Delete copy constructor to prevent copying
    Logger(const Logger&) = delete;
    
    // Delete assignment operator to prevent assignment
    Logger& operator=(const Logger&) = delete;

    // Vector to store log messages
    std::vector<Log*> logsvctr;
    
    // Static instance of Logger
    static Logger* instance;
};

#endif // LOGGER_H