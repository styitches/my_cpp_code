#include<iostream>
using namespace std;
//max函数可以写在main函数之后，需要提前声明
//声明可以写多次，定义只能写一次
int max (int a ,int b);   //声明
int max (int a , int b )
{
    return a > b ? a : b;
}
int main(){
    int a = 10;
    int b = 20;
    cout << max(a,b) << endl;
}