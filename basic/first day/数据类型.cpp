/*���ε�����
1��short ���ֽ�   +-2^15
2��int �ĸ��ֽ�   +-2^31
3��long �ĸ��ֽ�  ͬ��
4��long long �˸��ֽ�  +-2^63*/
/*sizeof�ؼ���   �����������ռ�õ��ڴ��д
�﷨�� sizeof����������/������*/
#include <iostream>
using namespace std;
int main (){
    short num1 = 10;
    cout << "shortռ�õ��ڴ�ռ�Ϊ" << sizeof(num1) << endl;
    int num2 = 10;
    cout << "intռ�õ��ڴ�ռ�Ϊ" << sizeof(num2) << endl;
    long num3 = 10;
    cout << "longռ�õ��ڴ�ռ�Ϊ" << sizeof(num3) << endl;
    long long num4 = 10;
    cout << "long longռ�õ��ڴ�ռ�Ϊ" << sizeof(num4) << endl;
    //short < int <= long <= long long
}
