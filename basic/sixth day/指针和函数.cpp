#include<iostream>
using namespace std;
void swap1(int a ,int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
void swap2(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(){
    //值传递         不改变实参的值
    int a1 = 10;
    int b1 = 20;
    swap1(a1,b1);
    cout << "a1 = " << a1 << endl;
    cout << "b1 = " << b1 << endl;
    //地址传递       可以修改实参的值
    int a2 = 10;
    int b2 = 20;
    swap2(&a2,&b2);
    cout << "a2 = " << a2 << endl;
    cout << "b2 = " << b2 << endl;
}