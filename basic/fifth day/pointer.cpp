#include<iostream>
using namespace std;
int main(){
    //1.����ָ��
    int a = 10;
    //ָ�붨����﷨���������� * ָ�������
    int * p;
    //��ָ���¼����a�ĵ�ַ
    //�൱�ڼ�����ϵ
    p = &a;
    cout << "a�ĵ�ַΪ" << &a << endl;
    cout << "ָ��pΪ" << p << endl;

    //2.ʹ��ָ��
    //����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
    //ָ��ǰ���*��������ã��ҵ�ָ��ָ����ڴ��е�����
    *p = 1000;   //���Զ��Ǹ���ַ�����ݽ��ж�д
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    //ָ��ռ�õ��ڴ�ռ�   32λ����ϵͳ��ռ��4���ֽ�   64λռ8���ֽ�
    int b = 10;
    int * pp = &b;
    cout << "sizeof(int*) = " << sizeof(pp) << endl;
    cout << "sizeof(int*) = " << sizeof(int *) << endl;
    cout << "sizeof(float*) = " << sizeof(float *) << endl;
    cout << "sizeof(double*) = " << sizeof(double *) << endl;
    cout << "sizeof(char*) = " << sizeof(char *) << endl;
    cout << "sizeof(string*) = " << sizeof(string *) << endl;
    system("pause");
    return 0;
}