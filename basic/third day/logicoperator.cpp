#include<iostream>
using namespace std;
int main (){
    //�߼������ �ǣ� 
    int a = 10;
    cout << !a << endl;    //aΪ�� ��aΪ��
    //�߼������ �� &&
    int b = 10;
    cout << (a && b) << endl;
    a = 0 ;
    cout << (a && b) << endl;
    b = 0;
    cout << (a && b) << endl;
    //�߼������ �� ||
    cout << (a || b) << endl;
    b = 1;
    cout << (a || b) << endl;
}