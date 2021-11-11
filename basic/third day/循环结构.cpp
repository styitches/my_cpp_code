#include<iostream>
using namespace std;
int main(){
    //while循环
    //打印0~9十个数字
    //避免出现死循环
    int num = 0;
    while (num < 10)  //循环条件
    {
        cout << "num = " << num << endl;    //执行语句
        num++;
    }
    system("pause");
    return 0;
}