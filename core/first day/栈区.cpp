#include<iostream>
using namespace std;
//栈区注意事项 --不要返回局部变量地址
//栈区的数据由编译器管理开辟和释放
int * func(int b)
{
    b = 100;       //形参数据也在栈区
    int a = 10;    //局部变量  存放在栈区，栈区的数据在数据执行完之后自动释放
    return &a;     //返回局部变量的地址
}
int main(){
    //接受func的返回值
    int * p = func(10);
    cout << *p << endl;
}