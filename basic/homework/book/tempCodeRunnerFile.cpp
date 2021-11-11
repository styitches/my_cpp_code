#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;  //代表从1到100的随机数    rand() % 100  代表从零到99的一百个数
    int x = 0;
    cout << "please input the number : ";
    do
    {
        cin >> x;
        if(x > num)
        {
            cout << "数值过大，请重新输入" << endl;
            continue;
        }
        else if(x < num)
        {
            cout << "数值过小，请重新输入" << endl;
            continue;
        }
        else if(x == num)
        {
            cout << "猜测正确" << endl;
            break;
        }
    } while (1);
    
}