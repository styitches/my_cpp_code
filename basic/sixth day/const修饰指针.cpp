#include<iostream>
using namespace std;
int main (){
    int a = 10;
    int b = 10;
    //����ָ��   
    //�ص㣺ָ��ָ����Ըı䣬ָ��ָ���ֵ�����Ը�
    const int * p1 = &a;    //const���������*  ������ȡ*�Ĳ���
    //*p = 20;     fault
    //p = &b;      ture

    //ָ�볣��
    //�ص㣺ָ��ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
    int * const p2 = &a;    //const���������p   ���ܶ�p�����޸�
    //*p = 20;      ture
    //p = &b;       fault

    //const������ָ�룬�����γ���
    const int * const p3 = &a;
}