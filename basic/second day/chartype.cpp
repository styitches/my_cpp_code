#include<iostream>
using namespace std;
int main (){
//1��������ʽ
    char ch = 'a';
    cout << ch <<endl;
//2���ַ��ͱ�����ռ�õ��ڴ��СΪ1
    cout << sizeof(ch) << endl;
//3���ַ��ͱ�����������
    char ch2 = 'b';          //�����ַ��ͱ���Ҫ�õ�����  ���ҵ������ڲ�ֻ����һ���ַ�  ���������ַ��ᱨ��
    cout << ch2 << endl;
//4���ַ��ͱ�����Ӧ��ASCII����
    cout << (int)ch << endl;
    string str = "hello";
    cout << str << endl;
    system("pause");
}