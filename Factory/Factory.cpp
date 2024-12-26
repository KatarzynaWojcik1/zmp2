#include "Factory.h"
//#include "Log.h"

Log* LogFactory::createLog_Factory(log_type type, std::string msg) {
    Log* obj = nullptr;
    if (type == logtype_error) {
        obj = new LogError(msg);
    } else if (type == logtype_warning) {
        obj = new LogWarning(msg);
    } else if (type == logtype_info) {
        obj = new LogInfo(msg);
    }
    return obj;
}