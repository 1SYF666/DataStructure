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


// 4 -8
#include <iostream>
#include <string>
using namespace std;

struct Pizza
{
    string pizza_company;
    double pizza_diameter;
    double pizza_weight;
};

int main()
{
    Pizza* snack = new Pizza;

    cout << "Please enter the diameter of the pizza: ";
    (cin >> snack->pizza_diameter).get();
    cout << "Please enter the name of the Pizza Company: ";
    getline(cin, snack->pizza_company);
    cout << "Please enter the weight of the pizza: ";
    cin >> snack->pizza_weight;

    cout << "The name of the Pizza Company: " << snack->pizza_company << endl;
    cout << "The diameter of the Pizza Company: " << snack->pizza_diameter << endl;
    cout << "The weight of the Pizza Company: " << snack->pizza_weight << endl;
    delete snack;

    return 0;
}



