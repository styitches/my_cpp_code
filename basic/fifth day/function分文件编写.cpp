#include<iostream>
using namespace std;
//函数分文件编写
//函数声明
void swap(int a ,int b);
void swap(int a ,int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//1.创建后缀名为.h的头文件
//2.创建后缀名为.cpp的源文件
//3.在头文件中写函数的声明
//4.在源文件中写函数的定义

//详见vs2019