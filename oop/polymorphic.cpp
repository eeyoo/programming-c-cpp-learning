/*
 多态性

 */

#include <iostream>
using namespace std;

class Shape {
protected:
    int width, height;

public:
    Shape(int a=0, int b=0) {
        width = a;
        height = b;
    }
    /*
    virtual int area() {
        cout << "Shape class area." << endl;
        return 0;
    }*/
    virtual int area() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(int a, int b) : Shape(a, b) {
        width = a;
        height = b;
    }

    int area() {
        cout << "Rectangle class area." << endl;
        return (width*height);
    }
};

class Triangle : public Shape {
public:
    Triangle(int a, int b) : Shape(a, b) {
        width = a;
        height = b;
    }
    int area() {
        cout << "Triangle class area." << endl;
        return (width*height/2.0);
    }
};

int main() {
    Shape *shape;

    Rectangle rec(10,12);
    Triangle tri(15,10);
    shape = &rec;
    cout << shape->area() << endl;

    shape = &tri;
    cout << shape->area() << endl;
    //int a = rec.area();
}
