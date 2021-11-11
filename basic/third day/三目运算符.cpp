#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    int c =0;
    c = (a > b ? a : b);       //三目运算符返回的是变量而非数值
    cout << "c = " << c <<endl;
    (a > b ? a : b) = 100;     //如果a>b,返回a,否则返回b
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}