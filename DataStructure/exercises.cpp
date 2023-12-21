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
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0,
		theCnt = 0, itCnt = 0, wdCnt = 0, notVowel = 0;

	string buf, the("the"), it("it");

	while (cin>>buf)
	{
		++wdCnt;

		cout << buf << ' ';

		if (wdCnt % 12 == 0)
		{
			cout << endl;
		}
		if (buf == the || buf == "The")
		{
			++theCnt;
		}
		else
		{
			if (buf == it || buf == "It")
			{
				++itCnt;
			}
		}

		for (int ix = 0; ix < buf.size(); ++ix)
		{
			switch (buf[ix])
			{
			case 'a':case 'A':++aCnt; break;
			case 'e':case 'E':++eCnt; break;
			case 'i':case 'I':++iCnt; break;
			case 'o':case 'O':++oCnt; break;
			case 'u':case 'U':++uCnt; break;
			default: ++notVowel;break;
			}
		}
	}

	cout<<"\n\n"
		<< "Words read: " << wdCnt << "\n\n"
		<< "the/The: " << theCnt << '\n'
		<< "it/It: " << itCnt << "\n\n"
		<< "non-vowels read: " << notVowel << "\n\n"
		<< "a: " << aCnt << '\n'
		<< "e: " << eCnt << '\n'
		<< "i: " << iCnt << '\n'
		<< "o: " << oCnt << '\n'
		<< "u: " << uCnt << endl;
		
		
	return 0;
}



