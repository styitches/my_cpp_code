#include<iostream>
using namespace std;
int main (){
    //print 1~100
    int x = 1;
    for (; x <= 100; x++)
    {
        if (x % 7 == 0 || x % 10 == 7 || x / 10 == 7)
        {
            cout << "ÇÃ×À×Ó" << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
}