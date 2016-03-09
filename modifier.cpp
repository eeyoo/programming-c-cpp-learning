/**
 * 修饰符
 * singed unsigned long short 可用于整型
 * signed unsigned 可用于字符型char
 * long 可用于双精度浮点型
 * signed unsigned 也可用于long short 修饰符，unsigned long int
 * unsigned x 等同于 unsigned int x
 * unsigned long x 等同于 unsigned long int x
 */

#include <iostream>

using namespace std;

int main()
{
    short int i;
    short unsigned int j;

    j = 50000;

    i = j;
    cout << i << " " << j << endl;
    // output -15536 50000
    // 无符号整数50000位模式被有符号整型解释为-15536

    return 0;
}