#include<iostream>
using namespace std; 
//���������ã�ת��Ϊint * const ref = &a;
void func(int& ref)
{
    ref = 100;    //ref�����ã�ת��Ϊ*ref = 100
}
int main(){
    int a= 10;


    //�Զ�ת��Ϊ int * const ref = &a;  ָ�볣����ָ��ָ�򲻿ɸı䣬Ҳ˵��Ϊʲô���ò��ɸ���
    int& ref = a;
    //refָ���ڲ��洢��������a�ĵ�ַ0x0011   a�ڲ��洢��������10
    ref = 20;    //�ڲ�����ref�����ã��Զ�ת��Ϊ*ref = 20;
    
}