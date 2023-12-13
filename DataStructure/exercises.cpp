#include <iostream>      //它把 iostream 的内容读入我们的文本文件中
using namespace std;
//C++标准库中的名字都是在一个称作 std 的名字空间中声明的
//using 指示符告诉编译器要使用在名字空间 std 中声明的名字


// iostream是输入输出流库标准文件注意它没有后缀，它包含cout的信息 
// 这对我们的程序是必需的

void read() 
{
	cout << "read()\n";
}

void sort()
{
	cout << "sort()\n";
}
void compact()
{
	cout << "compact()\n";
}

void write()
{
	cout << "write()\n";
}

int main()
{
	read();
	sort();
	compact();
	write();

	return 0;
}



