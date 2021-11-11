#include<iostream>
using namespace std;
int main(){
    //引用：给变量器别名
    //语法：数据类型 &别名 = 原名
    int a = 10;
    int &b = a;   //引用必须初始化    一旦初始化之后不可以更改 只能是一个数据的别名
    b = 20;
    cout << a << b <<  endl;
}