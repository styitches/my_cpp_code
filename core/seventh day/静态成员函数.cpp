#include<iostream>
using namespace std;
//静态成员成员函数
//所有的对象共享同一个函数
//静态成员函数只能访问静态成员变量

class Person{
public:
    static void func(){
        m_A = 100;   //静态成员函数能访问静态成员变量
        //不能访问非静态成员变量   因为函数无法区分到底是哪个对象的m_B无法判断是p1或者p2
        //还没有创建对象 这是创建了一个类
        cout << "static void func调用" << endl;
    }
    static int m_A;   //静态成员变量
    int m_B;

    //静态成员函数也是有访问权限的
    //类外无法访问私有的
};
int Person ::m_A = 0;    //静态成员变量要在类内声明，类外初始化
void test01(){
    //1.通过对象访问
    Person p;
    p.func();
    //2.通过类名访问
    Person ::func();
}
int main(){
    test01();
}