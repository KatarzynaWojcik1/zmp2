#include "Factory.h"

// Function to create a log object based on the log type
Log* LogFactory::createLog_Factory(log_type type, std::string msg) {
    Log* obj = nullptr; // Initialize the log object to nullptr
    if (type == logtype_error) { // Check if the log type is error
        obj = new LogError(msg); // Create a LogError object
    } else if (type == logtype_warning) { // Check if the log type is warning
        obj = new LogWarning(msg); // Create a LogWarning object
    } else if (type == logtype_info) { // Check if the log type is info
        obj = new LogInfo(msg); // Create a LogInfo object
    }
    return obj; // Return the created log object
}