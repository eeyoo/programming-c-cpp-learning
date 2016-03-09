/**
 * c++提供两种类型的字符串表示
 * C风格字符串
 * string类类型
 */

#include <iostream>
 using namespace std;

 int main()
 {
 	char greeting[6] = {'H','e','l','l','o','\0'};
 	cout << "greeting to " << greeting << endl;

 	char greeting1[] = "Hello";
 	cout << "greeting to " << greeting1 << endl;

 	return 0;
 }

 /**
  * 重复初始化 greeting 字符串数组编译器报错
  */
  