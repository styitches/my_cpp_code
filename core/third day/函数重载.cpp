#include<iostream>
using namespace std;
/*函数重载满足条件    提高函数复用性
1.同一个作用域之下   例如都在全局作用域
2.函数名称相同
3.函数参数类型不同，或者个数不同，或者顺序不同
4.函数返回值不能作为函数重载的条件*/
void func()
{
    cout << "func 的调用" << endl;
}
void func(int a)
{
    cout << "func(int a) 的调用" << endl;
}
void func(double a)
{
    cout << "func(double a) 的调用" << endl;
}
void func(int a, double b)
{
    cout << "func(int a ,double b) 的调用" << endl;

}
void func(double a, int b)
{
    cout << "func(double a ,int b) 的调用" << endl;
}
// void func(int a, int b)
// {
//     cout << "func(int a ,int b) 的调用" << 3+4 << endl;
// }
// void func(int b, int a)
// {
//     cout << "func(int a ,int b) 的调用" << 3*5 << endl;
// }
int main(){
    func();
    func(10);
    func(3.14);
    func(3,3.14);
    func(3.14,3);
    // func(3,4);
    // func(3,5);
}