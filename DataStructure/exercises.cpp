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
    int age;
    char grade;
    string fname, lname;

    cout << "What is your first name? ";
    getline(cin, fname);
    cout << "What is your last name? ";
    getline(cin, lname);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << lname << ", " << fname << endl;
    cout << "Grade: " << ++grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}




