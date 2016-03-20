/*
 class template

 */
#include <iostream>
#include <vector>
#include <cstdlib>
#include <stdexcept>

using namespace std;

template <class T>
class Stack {
private:
    vector<T> elems; // elements

public:
    void push(T const&); // push stack
    void pop();  // pop stack
    T top() const;  // get top element
    bool empty() const { // is empty
        return elems.empty();
    }
};

template <class T>
void Stack<T>::push (T const& elem) {
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop() {
    if (elems.empty()) {
        /* code */
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    elems.pop_back();
}

template <class T>
T Stack<T>::top() const {
    if (elems.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    return elems.back();
}

int main() {

    try {
        Stack<int> intStack; // integer stack
        Stack<string> strStack; // string stack

        intStack.push(7);
        cout << intStack.top() << endl;

        strStack.push("Hello");
        cout << strStack.top() << endl;
        strStack.pop();
        strStack.pop();
    } catch(exception const& ex) {
        cerr << "Exception: " << ex.what() << endl;
        return -1;
    }
}
