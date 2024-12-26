#include <iostream>
#include <vector>
#include "./Logger/Logger.cpp"

int main() {
    // Get the singleton instance of Logger
    Logger& log = Logger::getInstance();
    
    // Log different types of messages
    log.getMsg(logtype_error, "error message value");
    log.getMsg(logtype_warning, "warning message value");
    log.getMsg(logtype_info, "info message value");
    
    // Get the singleton instance of Logger again
    Logger& log2 = Logger::getInstance();
    
    // Log another error message
    log2.getMsg(logtype_error, "error message value from log2");

    // Comparing logger objects addresses to ensure they are the same instance
    if (&log == &log2) {
        std::cout << "Both are same, there is only one logger instance used" << std::endl;
    }

    // Display all logged messages
    log2.showlogs();
    std::cout << "---" << std::endl;
    log.showlogs();

    std::cout << "both log and log2 caontain the same values" << std::endl;

    return 0;
}