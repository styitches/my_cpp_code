#include<iostream>
using namespace std;
int main(){
    for ( int i = 1; i < 10 ; i++)
    {
        //���i����5 ���˳�ѭ�� �� ���ٴ�ӡ
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }
    //continus ���
    for (int i = 0; i <= 100 ; i++)
    {
        if (i % 2 == 0)
        {
            continue;   //����ż����ִ��continue�����ٽ���cout�����еڶ���ѭ��
        }               //����ɸѡ������ִ�е��˲�������ִ��
        cout << i << endl;
    }
}