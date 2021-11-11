//常量的定义方式
//1、#define  宏常量      函数体外面进行定义
//2、const 修饰的变量     函数体内部进行定义

//1、#define  宏常量
#define Day 7      //Day代表7   后面不加；
#include<iostream>
using namespace std;
int main(){
    //const修饰的变量
    const int month = 12;
    cout << "一周有" << Day << "天" <<endl;
    cout << "一年总共有" << month << "个月份" << endl;
    system("pause");
    return 0;
}