#include <iostream>
using namespace std;
int main(){
    int a, b, c, d, x;
    cout << "please input the number :";
    cin >> x;
    a = x % 10;
    b = ((x - a) / 10) % 10;
    d = x / 1000;
    c = (x - d * 1000) / 100;
    cout << a << "  " << b << "  " << c << "  " << d << endl;
}