/*
 抽象类

 */

#include <iostream>
using namespace std;

class Box {
public:
    virtual double getVolume() = 0;

private:
    double lenght;
    double width;
    double height;
};

int main() {
    // 实例化抽象函数
    //Box b;

    // 实例化抽象函数指针
    Box *b;
}
