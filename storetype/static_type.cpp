#include <iostream>

void func(void);

static int count = 10; // 全局变量

int main()
{
    while(count--)
    {
        func();
    }
    return 0;
}

void func(void)
{
    static int i = 5; // will memory value of i when enter func next time
    i++;
    std::cout<< "i is " << i;
    std::cout<< " and count is " << count << std::endl;
}