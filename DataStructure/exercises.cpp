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

#include <iostream>
using namespace std;

int main()
{
    string fname, lname;

    cout << "Enter your first name: ";
    getline(cin, fname);
    cout << "Enter your last name: ";
    getline(cin, lname);

    lname += ", " + fname;
    cout << "Here's the information in a single string: ";
    cout << lname << endl;

    return 0;
}



