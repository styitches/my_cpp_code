#include<iostream>
using namespace std;
//ջ��ע������ --��Ҫ���ؾֲ�������ַ
//ջ���������ɱ����������ٺ��ͷ�
int * func(int b)
{
    b = 100;       //�β�����Ҳ��ջ��
    int a = 10;    //�ֲ�����  �����ջ����ջ��������������ִ����֮���Զ��ͷ�
    return &a;     //���ؾֲ������ĵ�ַ
}
int main(){
    //����func�ķ���ֵ
    int * p = func(10);
    cout << *p << endl;
}