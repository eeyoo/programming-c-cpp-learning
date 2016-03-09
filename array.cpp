/**
 * 数组 存储一个固定大小的相同类型元素的顺序集合。
 * 声明数组
 * 初始化数组
 * 访问数组元素
 */

 #include <iostream>
 using namespace std;

 #include <iomanip>
 using std::setw;

 int main()
 {
 	int n[ 10 ]; // integer array size 10

 	for(int i = 0; i < 10; i++)
 	{
 		n[i] = i + 100;
 	}
 	cout << "Element" << setw(13) << "Value" << endl;

 	for(int j = 0; j < 10; j++)
 	{
 		cout << setw(7) << j << setw(13) << n[j] << endl;
 	}

 	return 0;
 }

 /**
  * 关于数组高级内容
  * 多维数组 - 最简单多维数组就是二维数组
  * 指向数组的指针 - 不带索引的数组名称即为指向首元素的指针
  * 从函数返回数组 - c++允许函数返回数组
  */
  