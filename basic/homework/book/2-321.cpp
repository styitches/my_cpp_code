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
            cout << "��ֵ��������������" << endl;
            continue;     //continueֻ����ѭ�����
        }
        else if(x < num)
        {
            cout << "��ֵ��С������������" << endl;
            continue;
        }
        else if(x == num)
        {
            cout << "�²���ȷ" << endl;
            break;
        }
    }
    
}