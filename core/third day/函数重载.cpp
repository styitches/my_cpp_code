#include<iostream>
using namespace std;
/*����������������    ��ߺ���������
1.ͬһ��������֮��   ���綼��ȫ��������
2.����������ͬ
3.�����������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
4.��������ֵ������Ϊ�������ص�����*/
void func()
{
    cout << "func �ĵ���" << endl;
}
void func(int a)
{
    cout << "func(int a) �ĵ���" << endl;
}
void func(double a)
{
    cout << "func(double a) �ĵ���" << endl;
}
void func(int a, double b)
{
    cout << "func(int a ,double b) �ĵ���" << endl;

}
void func(double a, int b)
{
    cout << "func(double a ,int b) �ĵ���" << endl;
}
// void func(int a, int b)
// {
//     cout << "func(int a ,int b) �ĵ���" << 3+4 << endl;
// }
// void func(int b, int a)
// {
//     cout << "func(int a ,int b) �ĵ���" << 3*5 << endl;
// }
int main(){
    func();
    func(10);
    func(3.14);
    func(3,3.14);
    func(3.14,3);
    // func(3,4);
    // func(3,5);
}