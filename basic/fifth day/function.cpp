#include<iostream>
using namespace std;
//1������ֵ����
//2��������
//3�������б�
//4�����������
//5��return���
//  ��ʽ    ����ֵ���� ������(�����б�)
//          {
//              ���������
//              return���
//          }
// int add (int num1 , int num2)
// {
//     int sum = num1 + num2;
//     return sum;
// }
//��������
// int main(){
//     int a = 10;
//     int b = 20;
//     int c = add(a,b);
//     cout << c << endl;
// }
//�����������Ҫ����ֵ������void
void swap (int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << num1 << num2 << endl;
}
int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    cout << a << b << endl;   //�����ڲ����ı亯���ڲ��Ĳ��� 
}