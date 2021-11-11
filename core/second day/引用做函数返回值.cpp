#include<iostream>
using namespace std;
//引用做函数返回值
//1.不要返回局部变量的引用
// int& test01()       //int&  相当于返回了引用
// {
//     int a = 10;   //存放在四区中的栈区
//     return a;
// }
//2.函数调用可以作为左值 *******   可以作为左值进行赋值
int& test02()
{
    static int a = 10;    //静态变量存放在全局区   全局区的暑假在程序结束之后释放
    return a;
}
int main ()
{
    // int &ref = test01();
    // cout << "ref = " << ref << endl;         第一次操作正确  因为编译器做出了保留
    // cout << "ref = " << ref << endl;         第二次结果错误  因为内存被释放
    int &ref2 = test02();   //返回的是a的引用   ref2相当于a的别名
    cout << "ref = " << ref2 << endl;
    cout << "ref = " << ref2 << endl;

    test02() = 1000;        //相当于a的变量返回之后进行了1000的赋值
    cout << "ref = " << ref2 << endl;
    cout << "ref = " << ref2 << endl;

}