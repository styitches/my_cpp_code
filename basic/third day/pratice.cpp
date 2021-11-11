#include<iostream>
 //time系统时间的头文件包含
using namespace std;
#include<ctime>
int main (){
    //添加随机数种子 利用当前时间生成随机数防止所有的随机数相同
    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    int x;
    cout << "please input the x" << endl;
    while (1)      //while(1)代表一直循环
    {   cin >> x;
        if (x > num)
        {
            cout << "your guess is bigger than num" << endl;
        }
        else if (x < num)
        {
        cout << "your guess is smaller than num" << endl;
        }
        else
        {
            cout << "you guess is right" << endl;
            break;  //break,可以利用该关键字可以退出当前循环
        }
    }
    
}