#include<iostream>
using namespace std;
//堆区：由程序员释放，否则在程序结束时由系统自动释放
int * func()
{
    //利用new关键字  可以把数据开辟到堆区
    int * p = new int (10);       //new  数据类型(初始值)  返回的是一个地址编号
    //指针本质也是局部变量  放在栈上 指针保存的数据是放在堆区
    return p;
}
int main (){ 
    int * p = func();
    cout << *p << endl;
}