#include <vector>
#include <iostream>
#include "Logger.h"

// Display all logged messages
void Logger::showlogs() {
    // Iterate through the vector of log messages
    for (auto i : logsvctr) {
        // Check the type of log message and print accordingly
        if (i->type == logtype_error) {
            std::cout << "Error: " << i->msg << std::endl;
        } else if (i->type == logtype_warning) {
            std::cout << "Warning: " << i->msg << std::endl;
        } else if (i->type == logtype_info) {
            std::cout << "Info: " << i->msg << std::endl;
        }
    }
}

// Create and store a log message
Log* Logger::getMsg(log_type type, std::string msg) {
    // Create a new LogFactory instance
    LogFactory* inst = new LogFactory();
    // Use the factory to create a log message
    Log* gen_log = inst->createLog_Factory(type, msg);
    // Store the log message in the vector
    logsvctr.push_back(gen_log);
    // Delete the factory instance
    delete inst;
    return gen_log;
}

// Get the singleton instance of Logger
Logger& Logger::getInstance() {
    // Static instance of Logger
    static Logger instance;
    return instance;
}