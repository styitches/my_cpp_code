#include<iostream>
using namespace std;
int main ()
{
    int a = 10; 
    int b = ++a * 10;   //��+1 ����б��ʽ����
    cout << a << endl << b << endl;
    int c = a++ * 10;   //�Ƚ��б��ʽ���� ��+1
    cout << a << endl << c << endl;
}