/**
 * 随机数生成器，两个相关函数：
 * rand() - 返回一个伪随机数
 * srand() - rand()运行前必先调用函数
 */

 #include <iostream>
 #include <ctime>
 #include <cstdlib>

 using namespace std;

 int main()
 {
 	int i, j;

 	// 设置种子
 	srand( (unsigned)time(NULL) );

 	/* generate 10 random number */
 	for(i = 0; i < 10; i++)
 	{
 		j = rand();
 		cout << "random " << i+1 << " = " << j << endl;
 	}

 	return 0;
 }