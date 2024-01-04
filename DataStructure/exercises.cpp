#include <iostream>      //它把 iostream 的内容读入我们的文本文件中
#include <cassert>
#include <fstream>
#include <string>
#include <utility> 
#include <complex>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
using namespace std;
//C++标准库中的名字都是在一个称作 std 的名字空间中声明的
//using 指示符告诉编译器要使用在名字空间 std 中声明的名字
// iostream是输入输出流库标准文件注意它没有后缀，它包含cout的信息 
// 这对我们的程序是必需的

// __FILE__ 用以指示本行语句所在源文件的文件名
// __LINE__ 用以指示本行语句所在源文件中的位置信息

int main()
{
	const int ia_size = 10;
	int ia[ia_size] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//填充 stack
	int ix = 0;
	stack<int> intStack;
	for (; ix < ia_size; ++ix)
	{
		intStack.push(ia[ix]);
	}
	int error_cnt = 0;
	if (intStack.size() != ia_size)
	{
		cerr << "oops! invalid intStack size: "
			<< intStack.size()
			<< "\t expected: " << ia_size << endl;
		++error_cnt;
	}

	int value;

	while (intStack.empty()==false)
	{
		//读取栈顶元素
		value = intStack.top();
		if (value != --ix)
		{
			cerr << "oops! expected " << ix
				<< " received " << value
				<< endl;
			++error_cnt;
		}

		//弹出栈顶元素，并重复
		intStack.pop();
	}

	cout << "Our program ran with "
		<< error_cnt << " errors!" << endl;

	return 0;
}






