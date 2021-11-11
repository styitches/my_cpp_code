#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x = 1;
    for (int i = 1 ; i <= 100; i++)
    {
        x *= 12;
        x = x % 1000;
    }
    cout << x << endl;
}
