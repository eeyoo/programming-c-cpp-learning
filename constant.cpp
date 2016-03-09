/**
 * 常量就是不变量，包括整型常量、浮点常量、布尔常量、字符常量
 * 字符串常量。定义常量两种方式：
 * #define预处理 和 const关键字
 */

#include <iostream>

using namespace std;

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    int area = 0;
    const int A = 10;
    const int B = 20;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;

    cout << "const A*B = " << A*B << NEWLINE;
    return 0;
}
