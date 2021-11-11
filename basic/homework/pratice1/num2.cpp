#include<iostream>
using namespace std;
int main (){
    int a, b, c ,d;
    cout << "please input the number of a , b , c :";
    cin >> a >> b >> c;
    d = a;
    a = b;
    b = c;
    c = d;
}