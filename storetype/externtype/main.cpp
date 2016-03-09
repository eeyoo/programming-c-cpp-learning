#include <iostream>

int count;
extern void write_extern(); // availabe for object out of this file

int main()
{
    count = 5;
    write_extern();
    return 0;
}

// Window g++ 多文件编译使用
// g++ main.cpp support.cpp -o xxx.exe
// 注意后缀.exe 否则编译报错链接错误