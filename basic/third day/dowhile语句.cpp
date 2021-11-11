#include<iostream>
using namespace std;
int main (){
    //dowhile先执行一次语句之后进行判断
    int a = 0;
    do
    {
        cout << a << endl;
        a++;
    } while (a <= 9 );
}