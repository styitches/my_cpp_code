#include<iostream>
using namespace std;
//�������ļ���д
//��������
void swap(int a ,int b);
void swap(int a ,int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//1.������׺��Ϊ.h��ͷ�ļ�
//2.������׺��Ϊ.cpp��Դ�ļ�
//3.��ͷ�ļ���д����������
//4.��Դ�ļ���д�����Ķ���

//���vs2019