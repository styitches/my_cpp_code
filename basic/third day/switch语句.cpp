#include<iostream>
using namespace std;
int main (){
    //switch
    //����Ӱ���
    //10~9 ����
    //8~7 �ǳ���
    //6~5 һ��
    //5���� ��Ƭ
    cout << "please input the scores" << endl;
    int scores = 0;
    cin >> scores;
    cout << "your scores is " << scores << endl;
    switch (scores)
    {
    case 10:
        cout << "����Ϊ�Ǿ����Ӱ" << endl;
        break;
    case 9:
        cout << "����Ϊ�Ǿ����Ӱ" << endl;
        break;
    case 8:
        cout << "����Ϊ�����Ӱ�ǳ���" << endl;
        break;
    case 7:
        cout << "����Ϊ�����Ӱ�ǳ���" << endl;
        break;
    case 6:
        cout << "����Ϊ�����Ӱ�ǳ���" << endl;
        break;
    default:
        cout << "����Ϊ����һ����Ƭ" << endl;
        break;
    }
}
//switchȱ��:�ж�ʱ��ֻ����һ�����λ����ַ���,����������
//switch�ŵ�:�ṹ����,ִ��Ч�ʸ�