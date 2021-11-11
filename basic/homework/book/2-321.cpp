#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    int x = 0;
    cout << "please input the number :  " << endl;
    while (1)
    {
        cin >> x;
        if(x > num)
        {
            cout << "数值过大，请重新输入" << endl;
            continue;     //continue只用于循环语句
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
    }
    
}