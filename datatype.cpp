/**
 * C++变量类型
 * bool  - 存储布尔类型变量
 * char  - 8bit字节的整型变量
 * int   - 依赖机器，最常见的整型数据
 * float - 单精度浮点值
 * double - 双精度浮点值
 * void   - 空类型，即什么类型都有可能
 * wchat_t - 宽字符类型
 */

#include <iostream>

using namespace std;

// 变量声明
extern int a, b;
extern int c;
extern float f;

int main()
{
    // 变量定义
    int a, b;
    int c;
    float f;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl; // output 30

    f = 70.0/3.0;
    cout << f << endl; // output 23.3333...

    return 0;
}