#include<iostream>
using namespace std;
int main()
{
    //1、创建bool数据类型
    bool flag = true;  //true代表真1  false代表假0   非零即真
    cout << flag << endl;
    flag = false;
    cout << flag << endl;
    //2、查看bool类型的内存空间   1字节
    cout << sizeof(flag) << endl;
}