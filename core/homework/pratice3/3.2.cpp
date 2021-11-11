
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
    cout << "您输入的数字对应的十进制数字为" << d << endl;
    system("pause");
    return 0;
}
//十六进制字符转十进制字符
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
        cout << "不符合数字进制" << endl;
        break;
    }
    return x;
}
//字符串str转int型数字
int change(string str)
{
    int sum = 0;
    for (int i = str.size() - 1, j = 0; i >= 0; i--, j++) //从低位到高位依次转化
        sum += change(str[i]) * pow(16, j);             //pow(x, y)返回x^y
    return sum;
}