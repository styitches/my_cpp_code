#include<iostream>
 //timeϵͳʱ���ͷ�ļ�����
using namespace std;
#include<ctime>
int main (){
    //������������ ���õ�ǰʱ�������������ֹ���е��������ͬ
    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    int x;
    cout << "please input the x" << endl;
    while (1)      //while(1)����һֱѭ��
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
            break;  //break,�������øùؼ��ֿ����˳���ǰѭ��
        }
    }
    
}