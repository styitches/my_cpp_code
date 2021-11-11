#include<iostream>
using namespace std;
int main(){
    //1.定义指针
    int a = 10;
    //指针定义的语法：数据类型 * 指针变量名
    int * p;
    //让指针记录变量a的地址
    //相当于简历关系
    p = &a;
    cout << "a的地址为" << &a << endl;
    cout << "指针p为" << p << endl;

    //2.使用指针
    //可以通过解引用的方式来找到指针指向的内存
    //指针前面加*代表解引用，找到指针指向的内存中的数据
    *p = 1000;   //可以对那个地址的数据进行读写
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    //指针占用的内存空间   32位操作系统下占用4个字节   64位占8个字节
    int b = 10;
    int * pp = &b;
    cout << "sizeof(int*) = " << sizeof(pp) << endl;
    cout << "sizeof(int*) = " << sizeof(int *) << endl;
    cout << "sizeof(float*) = " << sizeof(float *) << endl;
    cout << "sizeof(double*) = " << sizeof(double *) << endl;
    cout << "sizeof(char*) = " << sizeof(char *) << endl;
    cout << "sizeof(string*) = " << sizeof(string *) << endl;
    system("pause");
    return 0;
}