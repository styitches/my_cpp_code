#include<iostream>
using namespace std;
int main(){ 
    /*��ʶ����������
    1����ʶ���������ǹؼ���   int int = 10
    2����ʶ��ֻ��������ĸ�����»������ int abc = 10   int _abc = 20   int _1234abc = 10
    3����ʶ����һ���ַ�ֻ�����»��߻�����ĸ  int 123abc������
    4����ʶ�����ִ�Сд   int aaa = 100    cout << AAA << endl; (output error)
    tips:�������������������������֪��*/
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    cout << sum << endl;
    return 0;
}