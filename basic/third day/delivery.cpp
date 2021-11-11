#include<iostream>
using namespace std;
int main ()
{
    int a = 10;
    int b = 20;
    cout << a % b << endl;
    int a1 = 10;
    int b1 = 0;    //无法取模  并且两个小数无法取模
    cout << a1 % b1 << endl;
}