/**
 * c++中大量的函数用来操作以null结尾的字符串
 * supports a wide range of functions that manipulate null-terminate strings
 * strcpy(s1, s2) - 复制字符串s2到字符串s1
 * strcat(s1, s2) - 连接字符串s2到字符串s1的末尾
 * strlen(32)     - 返回字符串s1的长度
 * strcmp(s1, s2) - 先猜猜看
 * strchr(s1, ch) - 返回一个指针，指向字符串s1中ch首次出现的位置
 * strstr(s1, s2) - 返回一个指针，指向字符串s1中字符串s2首次出现的位置
 */
 #include <iostream>
 #include <cstring>

 using namespace std;

 int main()
 {
 	char str1[10] = "Hello";
 	char str2[10] = "World";
 	char str3[10];
 	int len;

 	// copy str1 to str3
 	strcpy(str3, str1);
 	cout << "strcpy( str3, str1 ) : " << str3 << endl;

 	// connect str1 and str2
 	strcat(str1, str2);
 	cout << "strcat( str1, str2 ) : " << str1 << endl;

 	// get length of str1
 	len = strlen(str1); 
 	cout << "strlen( str1 )       : " << strlen(str1) << endl;
 	cout << "strlen( str1 )       : " << len << endl;

 	return 0;
 }