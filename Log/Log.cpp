#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <string>

//types enum
typedef enum log_type
{
    logtype_error,
    logtype_warning,
    logtype_info
} log_type;

// Log interface class for deriving concrete log classes
class Log {
    public:
    log_type type;
    std::string msg;
};

// Concrete product class - LogError
class LogError : public Log{
    public: 
    LogError(std::string message){
        type = logtype_error;
        msg = message;
    }
};

// Concrete product class - LogWarning
class LogWarning : public Log{
    public: 
    LogWarning(std::string message){   
        type = logtype_warning;
        msg = message;
    }
};

// Concrete product class - LogError
class LogInfo : public Log{  
    public: 
    LogInfo(std::string message){
        type = logtype_info;
        msg = message;
    }
};

#endif // LOG_H