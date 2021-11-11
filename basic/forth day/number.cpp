#include<iostream>
#
using namespace std;
int main(){
    //定义方法：
    //1、数据类型 数组名[数组长度]
    //2、数据类型 数组名[数组长度] = {值1，值2、、、}
    //3、数据类型 数组名[] = {值1，值2、、、}
    //特点：放在一块连续的内存空间中
    //     数组中每个元素都是相同的数据类型
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    int arr2[5] = {10, 20, 30, 40, 50};   //数组初始值没有齐全则用0代替
    //利用循环输出数组
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << endl;
    }





    int arr3[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};  //定义数组时候必须有初始长度
    for (int i = 0; i < 9; i++)
    {
        cout << arr3[i] << endl;
    }

    //数组名的用处： 1、统计数组的内存长度
    //              2、获取数组在内存中的首地址
    cout << sizeof(arr) << endl;
    cout << sizeof(arr2) << endl;
    cout << sizeof(arr3) << endl;
    cout << sizeof(arr[0]) <<endl;
    //可以用sizeof(arr)/sizeof(arr[0]) 得到数组元素个数
    //统计数组首地址
    cout << "数组首地址是：" << arr << endl;    //十六进制
    cout << "数组第一个元素的地址是：" << &arr[0] << endl;   //单个元素的地址需要加&
    cout << "数组第二个元素的地址是：" << &arr[1] << endl;
    //数组名是常量，不可以进行赋值操作
}