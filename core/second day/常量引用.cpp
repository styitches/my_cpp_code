#include<iostream>
using namespace std;
//��������
//ʹ��const�����������βΣ���ֹ�����
void showValue(const int& val)
{
    //val = 1000;   ͬʱ�޸���a��val  ���������const ֱ�ӱ���
    cout << "val = " << val << endl;
}
int main(){
    //int a = 10;
    //int & ref1 = a;    ���ñ�������һ��Ϸ����ڴ�ռ�
    //const int & ref2 = 10;   ����const֮��������Ѵ����޸���
    //��Ϊint temp = 10; const int & ref = temp;
    //ref = 20;   �Ǵ����  �������޸�  ����const��ֻ��״̬���������޸�
    int a = 100;
    showValue(a);
}