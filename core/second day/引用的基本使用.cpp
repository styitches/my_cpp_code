#include<iostream>
using namespace std;
int main(){
    //���ã�������������
    //�﷨���������� &���� = ԭ��
    int a = 10;
    int &b = a;   //���ñ����ʼ��    һ����ʼ��֮�󲻿��Ը��� ֻ����һ�����ݵı���
    b = 20;
    cout << a << b <<  endl;
}