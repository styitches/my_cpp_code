
#include <iostream>
#include <cmath>
using namespace std;
int sixteenth(char c);
int change(string str);
int main()
{
    string x = "0";
    cin >> x;
    int d = change(x);
    cout << "����������ֶ�Ӧ��ʮ��������Ϊ" << d << endl;
    system("pause");
    return 0;
}
//ʮ�������ַ�תʮ�����ַ�
int change(char c)
{
    int x;
    switch (c)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        x = c - '0';
        break;
    case 'a':
    case 'A':
        x = 10;
        break;
    case 'b':
    case 'B':
        x = 11;
        break;
    case 'c':
    case 'C':
        x = 12;
        break;
    case 'd':
    case 'D':
        x = 13;
        break;
    case 'e':
    case 'E':
        x = 14;
        break;
    case 'f':
    case 'F':
        x = 15;
        break;
    default :
        cout << "���������ֽ���" << endl;
        break;
    }
    return x;
}
//�ַ���strתint������
int change(string str)
{
    int sum = 0;
    for (int i = str.size() - 1, j = 0; i >= 0; i--, j++) //�ӵ�λ����λ����ת��
        sum += change(str[i]) * pow(16, j);             //pow(x, y)����x^y
    return sum;
}