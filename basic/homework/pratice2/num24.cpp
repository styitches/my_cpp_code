#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double x = 0, y = 0;
    int a = 1, c = 1, m = 1;
    cout << "请输入x" << endl;
    cin >> x ;
    while(fmod((y * pow(10,6)) , 10) == 0)
    {
    for (int j = 1; j <= a; j++)
    {
        c *= j;
    }
    y += (pow(-1, m + 1)) * ((pow(x, 2 * m - 1)) / c);
    a += 2;
    m++;
    }
    printf("%1.6f", y);
}