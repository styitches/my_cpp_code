#include<iostream>
using namespace std;
//�������ɳ���Ա�ͷţ������ڳ������ʱ��ϵͳ�Զ��ͷ�
int * func()
{
    //����new�ؼ���  ���԰����ݿ��ٵ�����
    int * p = new int (10);       //new  ��������(��ʼֵ)  ���ص���һ����ַ���
    //ָ�뱾��Ҳ�Ǿֲ�����  ����ջ�� ָ�뱣��������Ƿ��ڶ���
    return p;
}
int main (){ 
    int * p = func();
    cout << *p << endl;
}