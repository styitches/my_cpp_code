#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int s, i =0;
    do 
    {
        i++;
        s += i;
    } while (i <= 99);
    cout << s << endl;
}