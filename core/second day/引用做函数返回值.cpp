#include<iostream>
using namespace std;
//��������������ֵ
//1.��Ҫ���ؾֲ�����������
// int& test01()       //int&  �൱�ڷ���������
// {
//     int a = 10;   //����������е�ջ��
//     return a;
// }
//2.�������ÿ�����Ϊ��ֵ *******   ������Ϊ��ֵ���и�ֵ
int& test02()
{
    static int a = 10;    //��̬���������ȫ����   ȫ����������ڳ������֮���ͷ�
    return a;
}
int main ()
{
    // int &ref = test01();
    // cout << "ref = " << ref << endl;         ��һ�β�����ȷ  ��Ϊ�����������˱���
    // cout << "ref = " << ref << endl;         �ڶ��ν������  ��Ϊ�ڴ汻�ͷ�
    int &ref2 = test02();   //���ص���a������   ref2�൱��a�ı���
    cout << "ref = " << ref2 << endl;
    cout << "ref = " << ref2 << endl;

    test02() = 1000;        //�൱��a�ı�������֮�������1000�ĸ�ֵ
    cout << "ref = " << ref2 << endl;
    cout << "ref = " << ref2 << endl;

}