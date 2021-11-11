#include<iostream>
using namespace std;
int main(){
    //空指针：用于给指针变量进行初始化
    //空指针不可以进行访问
    //0-255之间的内存编号是系统占用的，因此不可以访问
    int * p1 = NULL;    //null 代表0
    *p1 = 100;
    //野指针：在程序中避免出现野指针
    int * p2;
    p2 = (int *)0x1100;  //不知道这个内存空间是什么
    cout << *p2 << endl;
    system("pause");
    return 0;
}