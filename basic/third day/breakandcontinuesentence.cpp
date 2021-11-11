#include<iostream>
using namespace std;
int main(){
    for ( int i = 1; i < 10 ; i++)
    {
        //如果i等于5 ，退出循环 ， 不再打印
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }
    //continus 语句
    for (int i = 0; i <= 100 ; i++)
    {
        if (i % 2 == 0)
        {
            continue;   //若是偶数则执行continue，不再进行cout，进行第二次循环
        }               //可以筛选条件，执行到此不会向下执行
        cout << i << endl;
    }
}