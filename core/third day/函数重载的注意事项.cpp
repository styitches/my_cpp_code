#include<iostream>
using namespace std;
//1.引用作为函数重载的条件
//语法合适，但是
void func(int &a)   //引用必须引用合法内存空间  例如int &a = 10  不合法
{
    cout << "func(int &a)调用" << endl;
}
void func(const int &a)  //const int &a = 10  合法
{
    cout << "func(const int &a)调用" << endl;
}
//2.函数重载遇到默认参数  出现二义性 尽量避免
void func2(int a, int b = 10)
{
    cout << "func2(int a, int b = 10) 的调用" << endl;
}
void func2(int a)
{
    cout << "func2(int a) 的调用" << endl;
}
int main(){
    int a = 10;
    func(a);   //调用第一个
    func(10);  //调用第二个   在第一个不合法  第二个合法
    //func2(10);   会报错  第三个可以调用 第四个也可以  第三个有默认参数 
}