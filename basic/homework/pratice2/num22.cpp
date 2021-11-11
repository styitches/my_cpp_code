#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int s = 0;
    int n = 1, i = 1;
    for (i; i <= 7; i++)
    {
        n *= i;
        s += n;
    }
    cout << s << endl;
}