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


// 5 -9 - 8
#include <iostream>
#include <cstring>
using namespace std;

const int ArSize = 256;

int main()
{
    char str[ArSize];
    unsigned int count = 0;

    cout << "Enter words (to stop, type the word done):" << endl;
    while (cin >> str, strcmp("done", str))
    {
        ++count;
    }
    cout << "You entered a total of " << count << " words." << endl;

    return 0;
}



