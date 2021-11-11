#include <iostream>
using namespace std;
int main(){
    int x = 10;
    for (int a = 0, b = 0,  c = 0,  d =0; x < 10000;x++ )
    {
        a = x / 1000;
        b = (x - a * 1000) / 100;
        c = (x - a * 1000 - b * 100) / 10;
        d = x % 10;
        if(x > 999 && a < b && b < c && c < d)
        {
            cout << x << " ";
        }
        else if(x > 99 && x <= 999 && b < c && c < d)
        {
            cout << x << " ";
        }
        else if(x >9 && x <= 99 && c < d)
        {
            cout << x << " ";
        }
    }
}