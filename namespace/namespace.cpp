/*
 namespace definition

 */
#include <iostream>
//using namespace std;

namespace one {
    void func() {
        std::cout << "one namespace func called." << std::endl;
    }
}

namespace two {
    void func() {
        std::cout << "two namespace func called." << std::endl;
    }
}

using namespace one;
int main() {
    //one::func();
    //two::func();
    func();

    return 0;
}
