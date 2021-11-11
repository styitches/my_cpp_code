#include<iostream>
using namespace std;
int main (){
    int a = 10;
    int b = 10;
    //常量指针   
    //特点：指针指向可以改变，指针指向的值不可以改
    const int * p1 = &a;    //const后面紧跟着*  则不能做取*的操作
    //*p = 20;     fault
    //p = &b;      ture

    //指针常量
    //特点：指针指向不可以改，指针指向的值可以改
    int * const p2 = &a;    //const后面紧跟着p   则不能对p进行修改
    //*p = 20;      ture
    //p = &b;       fault

    //const既修饰指针，又修饰常量
    const int * const p3 = &a;
}