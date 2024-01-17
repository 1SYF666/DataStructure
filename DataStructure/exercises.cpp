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

const int INCH_PER_FEET = 12;
const double POUND_PER_KG = 2.2;
const double METER_PER_INCH = 0.0254;

int main()
{
    double height_feet, height_inch, weight, meter;

    cout << "Please enter your height in feet and inch: ";
    cin >> height_feet >> height_inch;
    cout << "Please enter your weight in pound: ";
    cin >> weight;

    cout << "Your height is " << height_feet * INCH_PER_FEET + height_inch << " inches." << endl;
    meter = (height_feet * INCH_PER_FEET + height_inch) * METER_PER_INCH;
    cout << "Your BMI is " << (weight / POUND_PER_KG) / (meter * meter) << "." << endl;

    return 0;
}





