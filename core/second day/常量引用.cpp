#include<iostream>
using namespace std;
//常量引用
//使用const：用来修饰形参，防止误操作
void showValue(const int& val)
{
    //val = 1000;   同时修改了a和val  如果加上了const 直接报错
    cout << "val = " << val << endl;
}
int main(){
    //int a = 10;
    //int & ref1 = a;    引用必须引用一块合法的内存空间
    //const int & ref2 = 10;   加上const之后编译器把代码修改了
    //改为int temp = 10; const int & ref = temp;
    //ref = 20;   是错误的  不可以修改  加入const是只读状态，不可以修改
    int a = 100;
    showValue(a);
}