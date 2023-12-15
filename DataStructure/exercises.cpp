#include <iostream>      //它把 iostream 的内容读入我们的文本文件中
#include <cassert>
#include <fstream>
#include <string>
using namespace std;
//C++标准库中的名字都是在一个称作 std 的名字空间中声明的
//using 指示符告诉编译器要使用在名字空间 std 中声明的名字
// iostream是输入输出流库标准文件注意它没有后缀，它包含cout的信息 
// 这对我们的程序是必需的

// __FILE__ 用以指示本行语句所在源文件的文件名
// __LINE__ 用以指示本行语句所在源文件中的位置信息

int main()
{
	//int element_count = 0;
	//if (element_count == 0)
	//{
	//	cerr << "time: " << __TIME__ << endl
	//	     << "date: " << __DATE__ << endl;
	//
	//}
	//assert(element_count == 0);

	ofstream outfile("out_file");
	ifstream infile("in_file");

	if (!infile)
	{
		cerr << "error:unable to open input file!\n ";
		return -1;
	}

	if (!outfile)
	{
		cerr << "error:unable to open output file!\n ";
		return -2;
	}

	/*
		从一个名为 in_file 的文本文件中读取单词 
		然后把每个词写到一个名为 out_file 的输出文件中 
		并且每个词之间用空格分开
	*/

	string word;
	while (infile >> word)
	{
		outfile << word << ' ';
	}

	return 0;
}



