/*
 namespace definition

 */
#include <iostream>
//using namespace std;

namespace one {
    void func() {
        std::cout << "Inside one namespace." << std::endl;
    }

    namespace two {
        void func() {
            std::cout << "  Inside two namespace." << std::endl;
        }
    }

}

//using namespace one::two;
int main() {
    //one::func();
    //two::func();
    one::func();
    one::two::func();

    return 0;
}
