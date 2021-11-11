#include<iostream>
using namespace std;
int main (){
    //for recycle
    //print num 0блг╣
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }



    int a = 0;
    for(;;)
    {
        if (a >=10)
        {
            break;
        }
        else
        {
            cout << a << endl;
            a++;
        }
    }
    system("pause");
    return 0;
}