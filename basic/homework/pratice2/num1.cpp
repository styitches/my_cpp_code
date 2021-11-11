#include <iostream>
#include<cmath>
using namespace std;
int main(){
    float x, y, z;
    cout << " please input the x and y :" << endl;
    cin >> x >> y;
    if(x < 0 && y < 0)
    {
        z = exp(x + y);
        cout << z << endl;
    }
    else if (x + y >= 1 && x + y < 10)
    {
        z = log(exp(x + y));
        cout << z << endl;
    }
    else
    {
        float q = fabs(x + y);
        z = log10(q + 1);
        cout << z << endl;
    }
    
}