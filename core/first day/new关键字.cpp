#include<iostream>
using namespace std;
int * func()
{
    //new���ص���ָ��
    int * p = new int(10);
    return p;
}
void test01()
{
    int * p = func();
    cout << *p << endl;
    delete p;
    cout << *p << endl;      //�ͷ�֮���ٴη��ʾ��ǷǷ��ڴ���
    //�����������ɳ���Ա������ ����Ա�����ͷ�
    //������ͷŶ���������  �ùؼ���delete
}
void test02()
{
    //����ʮ���������ݵ����飬�ڶ���
    int *arr = new int[10];    //[10]   ��������������ʮ������
    for(int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
}
int main (){
    test01();
    test02();
}