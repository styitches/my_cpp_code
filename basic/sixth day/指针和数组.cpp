#include<iostream>
using namespace std;
int main(){
    //利用指针访问数组中的元素
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int * p = arr;   //arr就是数组的首地址
    cout << "利用指针来访问第一个元素" << *p << endl;
    p++;             //代表p往后移动了了四个字节；即到了arr的第二个元素地址   因为创建的指针类型即位整形
    cout << "利用指针访问第二个元素" << *p << endl;
    //利用指针进行遍历数组
    int * p1 = arr;
    for (int i = 0; i < 10; i++)
    {
        cout << *p1 << endl;
        p1++;
    }
    system("pause");
    return 0;
}