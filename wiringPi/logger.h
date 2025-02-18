#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>
#include <time.h>

#define LOG_INFO(format, ...) log_message("INFO", __FILE__, __FUNCTION__, __LINE__, format, ##__VA_ARGS__)
#define LOG_WARN(format, ...) log_message("WARN", __FILE__, __FUNCTION__, __LINE__, format, ##__VA_ARGS__)
#define LOG_ERROR(format, ...) log_message("ERROR", __FILE__, __FUNCTION__, __LINE__, format, ##__VA_ARGS__)

void log_message(const char *level, const char *file, const char *function, int line, const char *format, ...);

#endif // LOGGER_H