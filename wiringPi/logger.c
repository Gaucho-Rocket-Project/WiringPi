#include "logger.h"
#include <stdarg.h>

void log_message(const char *level, const char *file, const char *function, int line, const char *format, ...) {
    va_list args;
    va_start(args, format);

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);

    printf("[%02d-%02d-%04d %02d:%02d:%02d] [%s] [%s:%d] [%s] ", 
           local->tm_mday, local->tm_mon + 1, local->tm_year + 1900, 
           local->tm_hour, local->tm_min, local->tm_sec, 
           level, file, line, function);
    vprintf(format, args);
    printf("\n");

    va_end(args);
}