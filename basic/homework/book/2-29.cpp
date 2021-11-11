#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a = pow(100.0, 0.5);
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "5" << endl;
    cout << "7" << endl;
    for (int i = 1; i <= 100; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }
        else if (i % 3 == 0)
        {
            continue;
        }
        else if (i % 5 == 0)
        {
            continue;
        }
        else if (i % 7 == 0)
        {
            continue;
        }
        else
        {
            cout << i << endl;
        }
        
    }
}