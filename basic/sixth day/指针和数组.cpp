#include<iostream>
using namespace std;
int main(){
    //����ָ����������е�Ԫ��
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int * p = arr;   //arr����������׵�ַ
    cout << "����ָ�������ʵ�һ��Ԫ��" << *p << endl;
    p++;             //����p�����ƶ������ĸ��ֽڣ�������arr�ĵڶ���Ԫ�ص�ַ   ��Ϊ������ָ�����ͼ�λ����
    cout << "����ָ����ʵڶ���Ԫ��" << *p << endl;
    //����ָ����б�������
    int * p1 = arr;
    for (int i = 0; i < 10; i++)
    {
        cout << *p1 << endl;
        p1++;
    }
    system("pause");
    return 0;
}