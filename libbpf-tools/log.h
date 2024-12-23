#ifndef MY_LOG_H
#define MY_LOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// 定义日志级别
typedef enum {
    DEBUG,
    INFO,
    WARNING,
    ERROR
} LogLevel;


// 设置日志文件
void set_log_file(const char *filename) ;

// 设置日志级别
void set_log_level(LogLevel level) ;

// 获取当前时间字符串
char* get_current_time() ;

// 日志记录函数
void log_message(LogLevel level, const char *message, int line, const char *func) ;

#define LOG_DEBUG(msg) log_message(DEBUG, msg, __LINE__, __func__);
#define LOG_INFO(msg) log_message(INFO, msg, __LINE__, __func__);
#define LOG_WARNING(msg) log_message(WARNING, msg, __LINE__, __func__);
#define LOG_ERROR(msg) log_message(ERROR, msg, __LINE__, __func__);

#endif // MY_LOG_H