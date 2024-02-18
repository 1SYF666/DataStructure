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


// 5 -9 - 5
#include <iostream>
#include <string>
using namespace std;

const int NUM = 3;
const int ArSize = 12;

int show_result(int(*x)[ArSize], int n);

int main()
{
    const string months[ArSize] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };
    int sum, total, sales_volume[NUM][ArSize];

    for (int i = 0; i < NUM; i++)
    {
        cout << "Year " << i + 1 << ": " << endl;
        for (int j = 0; j < ArSize; j++)
        {
            cout << "Please enter number of books sold (";
            cout << months[j] << "): ";
            cin >> sales_volume[i][j];
        }
        cout << endl;
    }

    sum = total = show_result(sales_volume, 0);
    cout << "A total of " << sum << " <<C++ For Fools>> books were sold in the first year." << endl;
    total += sum = show_result(sales_volume, 1);
    cout << "A total of " << sum << " <<C++ For Fools>> books were sold in the second year." << endl;
    total += sum = show_result(sales_volume, 2);
    cout << "A total of " << sum << " <<C++ For Fools>> books were sold in the third year." << endl;
    cout << "A total of " << total << " <<C++ For Fools>> books were sold in three years." << endl;

    return 0;
}

int show_result(int(*x)[ArSize], int n)
{
    int sum = 0;

    for (int i = 0; i < ArSize; i++)
    {
        sum += x[n][i];
    }
    return sum;
}


