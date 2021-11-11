#include<iostream>
using namespace std;
//1、返回值类型
//2、函数名
//3、参数列表
//4、函数体语句
//5、return语句
//  格式    返回值类型 函数名(参数列表)
//          {
//              函数体语句
//              return语句
//          }
// int add (int num1 , int num2)
// {
//     int sum = num1 + num2;
//     return sum;
// }
//函数调用
// int main(){
//     int a = 10;
//     int b = 20;
//     int c = add(a,b);
//     cout << c << endl;
// }
//如果函数不需要返回值可以用void
void swap (int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << num1 << num2 << endl;
}
int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    cout << a << b << endl;   //函数内部不改变函数内部的参数 
}