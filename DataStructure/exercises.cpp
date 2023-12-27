#include <iostream>      //它把 iostream 的内容读入我们的文本文件中
#include <cassert>
#include <fstream>
#include <string>
#include <complex>
#include <vector>
#include <map>
using namespace std;
//C++标准库中的名字都是在一个称作 std 的名字空间中声明的
//using 指示符告诉编译器要使用在名字空间 std 中声明的名字
// iostream是输入输出流库标准文件注意它没有后缀，它包含cout的信息 
// 这对我们的程序是必需的

// __FILE__ 用以指示本行语句所在源文件的文件名
// __LINE__ 用以指示本行语句所在源文件中的位置信息



int main()
{
	map<string, string> trans_map;
	typedef map<string, string>::value_type valType;

	//第一个权宜之计：将转换对固定写在代码中
	trans_map.insert(valType("gratz", "grateful"));
	trans_map.insert(valType("em", "them"));
	trans_map.insert(valType("cuz", "because"));
	trans_map.insert(valType("nah", "no"));
	trans_map.insert(valType("sez", "says"));
	trans_map.insert(valType("tanx", "thanks"));
	trans_map.insert(valType("wuz", "was"));
	trans_map.insert(valType("pos", "suppose"));

	// OK:显示trans_map
	map<string, string>::iterator it;
	cout << "Here is our transformation map: \n\n";

	for (it = trans_map.begin(); it != trans_map.end(); ++it)
	{
		cout << "key: " << (*it).first << "\t"
			<< "value: " << (*it).second << "\n";
	}
	cout << "\n\n";

	//第二个权宜之计：固定写入文字
	string textarray[14] = { "nah", "I", "sez", "tanx", "cuz", "I","wuz",
							 "pos", "to", "not", "cuz", "I", "wuz", "gratz" };
	vector<string> text(textarray, textarray + 14);
	vector<string>::iterator iter;





	return 0;
}



