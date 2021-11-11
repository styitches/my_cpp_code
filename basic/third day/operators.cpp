#include<iostream>
using namespace std;
int main ()
{
    int a1 = 10;
    int b1 = 3;
    cout << a1 / b1 << endl;    //两个整数相除 结果依然是整数 将小数部分舍去
    int a2 = 30;
    int b2 = 60;
    cout << a2 / b2 << endl;
    // int a3 = 10;
    // int b3 = 0;
    // cout << a3 / b3 << endl;   //无定义  不会输出结果
    float f1 = 0.12f;
    float f2 = 79.21f;
    cout << f1 / f2 << endl;
}