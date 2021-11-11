#include<iostream>
using namespace std;
int main (){
    //逻辑运算符 非！ 
    int a = 10;
    cout << !a << endl;    //a为真 非a为假
    //逻辑运算符 与 &&
    int b = 10;
    cout << (a && b) << endl;
    a = 0 ;
    cout << (a && b) << endl;
    b = 0;
    cout << (a && b) << endl;
    //逻辑运算符 或 ||
    cout << (a || b) << endl;
    b = 1;
    cout << (a || b) << endl;
}