#include<iostream>
using namespace std;
int main ()
{
    int a = 10; 
    int b = ++a * 10;   //先+1 后进行表达式运算
    cout << a << endl << b << endl;
    int c = a++ * 10;   //先进行表达式运算 后+1
    cout << a << endl << c << endl;
}