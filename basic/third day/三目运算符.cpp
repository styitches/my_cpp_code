#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    int c =0;
    c = (a > b ? a : b);       //��Ŀ��������ص��Ǳ���������ֵ
    cout << "c = " << c <<endl;
    (a > b ? a : b) = 100;     //���a>b,����a,���򷵻�b
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}