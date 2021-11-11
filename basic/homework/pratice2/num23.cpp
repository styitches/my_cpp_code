#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x = 1, y = 2, a = 0, s = 0;
    for (; x <= 39; x = x + 2 , y = y + 2)
    {
        a = x * y;
        s += a;
    }
    cout << s << endl;
}