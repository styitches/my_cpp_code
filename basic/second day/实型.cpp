#include<iostream>
using namespace std;
int main (){
    //1��������  float 7λ��Ч����   ռ��4�ֽ�
    //2��˫����  double  15-16λ��Ч����    ռ��8�ֽ� ���Ĭ��Ϊ��λ��Ч����
    float f1 = 3.14f;           //һ����С�������һ��f����������һ����Ϊ�����ȸ�����  ������Ҫ����һ��ת��   ��ΪС��Ĭ��Ϊ˫����
    double d1 = 3.1415926;
    cout << f1 << endl;
    cout << d1 << endl;
    cout << sizeof(f1) << endl;
    cout << sizeof(d1) << endl;

    float f2 = 3e2;//��ѧ������  3e2 = 3 * 10 ^ 2     3e-2 = 3 * 0.1 ^ 2
    float f3 = 3e-2;// float f1 = 3e2
    cout << f2 << endl;
    cout << f3 << endl;
    system("pause");
}
