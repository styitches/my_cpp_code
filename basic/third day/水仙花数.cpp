#include<iostream>
using namespace std;
int main (){
    int x = 100;
        do
        {
            int a , b , c = 0;
            a = x / 100;
            b = x / 10 - a * 10;
            c = x % 10;
                if(a*a*a + b*b*b + c*c*c == x)
                {
                    cout << "x 为水仙花数,且x为" << x << endl;
                }
            x++;
        } while (x <1000);
}