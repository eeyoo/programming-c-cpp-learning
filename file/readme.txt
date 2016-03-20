文件与流
============
iostream标准库提供了cin cout 方法从标准输入读取流和标准输出写入流。
类似，从文件读取流和写入流，由c++另一个标准库 fstream提供。
定义了3个新的数据类型：
ofstream 表示输出文件流，用于创建文件并向文件写入信息
ifstream 表示输入文件流，用于从文件读取信息
fstream  同时具有ofstream ifstream功能，可以创建文件，写入信息，并读取信息。


打开文件mode
==============
打开文件函数 void open(const file* filename, ios::openmode mode);
ios::app 追加模式
ios::ate 打开文件定位到文件末尾
ios::in  打开文件用于写入信息
ios::out 打开文件用于读取信息
ios::trunc 如果文件存在，文件长度清零
