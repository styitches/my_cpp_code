#include<iostream>       //ѡ��ṹ
using namespace std;
int main(){
    //����
    int scores;
    cout << "please input the scores" << endl;
    cin >> scores;
    if (scores >= 600)
    {
        cout << "��ϲ��������һ����ѧ" << endl;
    }
    //����
    int grades;
    cout << "please input the grades" << endl;
    cin >> grades;
    if(grades >= 600)
    {
        cout << "��ϲ������һ����ѧ" << endl;
    }
    else
    {
        cout << "δ����һ����ѧ" << endl;
    }
    //������if���
    int hhh;
    cout << "������hhh" <<endl;
    cin >> hhh;
    cout << "please input the hhh" << endl;
    if (hhh >=600)
    {
        cout << "��ϲ�㿼����һ����ѧ" << endl;
        if (hhh > 700)
        {
            cout << "���ܿ��ϱ�����ѧ" << endl;
        }
        else if (hhh > 650)
        {
            cout << "���ܿ����廪��ѧ" << endl;
        }
        else
        {
            cout << "���ܿ��������ѧ" << endl;
        }
    }
    else if (hhh > 500)
    {
        cout << "��ϲ�㿼���˶�����ѧ";
    }
    else if(hhh > 400)
    {
    cout << "��ϲ�㿼����������ѧ" <<endl;
    }
    else
    {
    cout << "���ź���û�п��ϱ��ƴ�ѧ,���ٽ�����" <<endl;
    }
}