四个时间相关的类型
====================
clock_t time_t size_t 能够把系统时间和日期表示为某种整数。
结构体tm把日期和时间以C结构体形式保存。
struct tm {
    int tm_sec;     // 秒，0-59，允许至61
    int tm_min;     // 分，0-59
    int tm_hour;    // 小时，0-23
    int tm_mday;    // 某月第几天，1-31
    int tm_mon;     // 月，0-11
    int tm_year;    // 年，自1900年起
    int tm_wday;    // 某周第几天，0-6，从星期日开始
    int tm_yday;    // 某年第几天，0-365，从1月1日算起
    int tm_isdst;   // 夏令时
}

C/C++标准库中日期和时间重要函数
===================
time_t time(time_t *time)
返回系统当前日历时间，自1970年1月1日以来的秒数。如果系统没有时间，则返回xx
char* ctime(const time_t *time)
返回一个表示当地时间的字符串指针，字符串形式day month year hours minutes seconds year\n\0(测试机器为 weak month day hour:min:sec year\n\0)
struct tm* localtime(const time_t *time)
返回一个指向表示本地时间的tm结构体的指针
clock_t clock(void)
返回程序执行起(一般为程序开头)，处理器时钟所使用的时间。如果时间不可用，则返回xx
char* asctime(const struct tm *time)
返回一个指向字符串的指针，字符串包含了time所指向结构中存储的信息，返回形式为：
day month date hours:minutes:seconds year\n\0
struct tm* gmtime(const time_t *time)
返回一个指向tm结构的time指针，用于协调世界时UTC也被称为格林尼治标准GMT表示
time_t mktime(struct tm *time)
返回日历时间，相当于time所指向结构中存储的时间
double difftime(time_t time2, time_t time1)
返回time1和time2之间相差的秒数
size_t strtime()
返回可用于格式化日期和时间
