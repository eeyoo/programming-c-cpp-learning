/**
 * 变量作用域
 * 局部变量 - 在函数或一个代码块内部
 * 全局变量 - 在所以函数外部声明的变量
 * 局部变量系统不会初始化，必须对其初始化
 * 全局变量系统会自动初始化
 */

#include <iostream>

using namespace std;

// 全局变量声明
int g;

int main()
{
    // 局部变量声明
    int a, b;
    int c;
    //int g;

    cout << a << " " << b << endl;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << "a + b = " << c << endl;
    cout << "全局变量 g = " << g << endl;

    return 0;
}