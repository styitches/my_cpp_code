#include<iostream>
using namespace std;
//1.������Ϊ�������ص�����
//�﷨���ʣ�����
void func(int &a)   //���ñ������úϷ��ڴ�ռ�  ����int &a = 10  ���Ϸ�
{
    cout << "func(int &a)����" << endl;
}
void func(const int &a)  //const int &a = 10  �Ϸ�
{
    cout << "func(const int &a)����" << endl;
}
//2.������������Ĭ�ϲ���  ���ֶ����� ��������
void func2(int a, int b = 10)
{
    cout << "func2(int a, int b = 10) �ĵ���" << endl;
}
void func2(int a)
{
    cout << "func2(int a) �ĵ���" << endl;
}
int main(){
    int a = 10;
    func(a);   //���õ�һ��
    func(10);  //���õڶ���   �ڵ�һ�����Ϸ�  �ڶ����Ϸ�
    //func2(10);   �ᱨ��  ���������Ե��� ���ĸ�Ҳ����  ��������Ĭ�ϲ��� 
}