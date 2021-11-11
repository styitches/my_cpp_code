#include<iostream>
using namespace std;
int main (){
    //1、单精度  float 7位有效数字   占用4字节
    //2、双精度  double  15-16位有效数字    占用8字节 输出默认为六位有效数字
    float f1 = 3.14f;           //一般在小数后面加一个f用来让数字一步成为单精度浮点数  否则需要进行一步转换   因为小数默认为双精度
    double d1 = 3.1415926;
    cout << f1 << endl;
    cout << d1 << endl;
    cout << sizeof(f1) << endl;
    cout << sizeof(d1) << endl;

    float f2 = 3e2;//科学计数法  3e2 = 3 * 10 ^ 2     3e-2 = 3 * 0.1 ^ 2
    float f3 = 3e-2;// float f1 = 3e2
    cout << f2 << endl;
    cout << f3 << endl;
    system("pause");
}
