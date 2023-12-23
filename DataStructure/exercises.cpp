#include <iostream>      //它把 iostream 的内容读入我们的文本文件中
#include <cassert>
#include <fstream>
#include <string>
#include <complex>
#include <vector>
using namespace std;
//C++标准库中的名字都是在一个称作 std 的名字空间中声明的
//using 指示符告诉编译器要使用在名字空间 std 中声明的名字
// iostream是输入输出流库标准文件注意它没有后缀，它包含cout的信息 
// 这对我们的程序是必需的

// __FILE__ 用以指示本行语句所在源文件的文件名
// __LINE__ 用以指示本行语句所在源文件中的位置信息


int main()
{
	string fileName;
	
	cout << "Please enter of file to open: ";
	cin >> fileName;

	if (fileName.empty())
	{
		cerr << "fileName is empty().bailing out.bye!\n";
		return -1;
	}

	ifstream inFile(fileName.c_str());  

	if (!inFile)
	{
		cerr << "unable to open file.bailing out.bye!\n";
		return -2;
	}

	string inBuf;
	vector<string> text;

	while (inFile>>inBuf)
	{
		for (int ix = 0; ix < inBuf.size(); ++ix)
		{
			if ( (char ch = inBuf[ix]) == '.')
			{
				ch = '_';

			}

		}

	}





	return 0;
}



