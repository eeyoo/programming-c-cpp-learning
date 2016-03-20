/*
 对象内存分配

 */
#include <iostream>
using namespace std;

class Box {
public:
    Box() {
        cout << "box constructor." << endl;
    }
    ~Box() {
        cout << "box descontructor." << endl;
    }
};

int main() {
    Box *b = new Box[4];

    delete [] b;
    return 0;
}
