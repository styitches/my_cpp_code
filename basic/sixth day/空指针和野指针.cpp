#include<iostream>
using namespace std;
int main(){
    //��ָ�룺���ڸ�ָ��������г�ʼ��
    //��ָ�벻���Խ��з���
    //0-255֮����ڴ�����ϵͳռ�õģ���˲����Է���
    int * p1 = NULL;    //null ����0
    *p1 = 100;
    //Ұָ�룺�ڳ����б������Ұָ��
    int * p2;
    p2 = (int *)0x1100;  //��֪������ڴ�ռ���ʲô
    cout << *p2 << endl;
    system("pause");
    return 0;
}