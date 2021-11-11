#include <iostream>
using namespace std;
int main(){
    float x;
    cout << "please input the number :" << endl;
    cin >> x;
    int y = x * 1000;
    int a, b, c;
    a = y % 10;
    b = y / 100;
    c = (y - b*100) / 10;
    cout << "'0  " << b << "  " << c << "  " << a << "'" << endl;
}
