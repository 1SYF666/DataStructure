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


// 5 -9 - 2
#include <iostream>
#include <array>
using namespace std;

const int ArSize = 101;

int main()
{
    array<long double, ArSize> factorials;

    factorials[0] = factorials[1] = 1L;
    for (int i = 2; i < ArSize; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }
    for (int i = 0; i < ArSize; i++)
    {
        cout << i << "! = " << factorials[i] << endl;
    }

    return 0;
}



