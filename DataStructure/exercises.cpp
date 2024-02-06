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


// 4 -9
#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string brand;
    double candy_weight;
    int candy_calorie;
};

int main()
{
    CandyBar* snack = new CandyBar[3];

    snack[0] = { "Mocha Munch", 2.3, 350 };
    snack[1] = { "Mooncake", 3.5, 369 };
    snack[2] = { "Birthdaycake", 6.8, 460 };

    cout << "The first candy:" << endl;
    cout << "Brand: " << snack[0].brand << endl;
    cout << "Candy_weight: " << snack[0].candy_weight << endl;
    cout << "Candy_calorie: " << snack[0].candy_calorie << endl;

    cout << "\nThe second candy:" << endl;
    cout << "Brand: " << snack[1].brand << endl;
    cout << "Candy_weight: " << snack[1].candy_weight << endl;
    cout << "Candy_calorie: " << snack[1].candy_calorie << endl;

    cout << "\nThe third candy:" << endl;
    cout << "Brand: " << snack[2].brand << endl;
    cout << "Candy_weight: " << snack[2].candy_weight << endl;
    cout << "Candy_calorie: " << snack[2].candy_calorie << endl;
    delete[] snack;

    return 0;
}



