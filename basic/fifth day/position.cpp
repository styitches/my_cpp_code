#include<iostream>
using namespace std;
int main(){
    //��ά����������;
    //1���鿴�ڴ�ռ�
    int arr[2][3] = 
    {
        {1,2,3},
        {4,5,6}
    };
    cout << "��ά����ռ���ڴ�ռ�Ϊ" << sizeof(arr) << endl;
    cout << "��ά�����һ��ռ���ڴ�" << sizeof(arr[0]) << endl;
    cout << "��ά�����һ��Ԫ��ռ���ڴ�Ϊ" << sizeof(arr[0][0]) << endl;

    cout << "��ά��������" << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "��ά��������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
    cout << "��ά�����׵�ַ" << &arr << endl;
    cout << "��ά�����һ���׵�ַ" << &arr[0] << endl;
    cout << "��ά����ڶ����׵�ַ" << &arr[1] << endl;
}