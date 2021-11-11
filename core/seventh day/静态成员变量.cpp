#include<iostream>
using namespace std;
//静态成员变量
//所用对象共享一份数据
//在编译阶段分配内存
//类内声明 类外初始化   必须的操作
class Person{
public:
    static int m_A;
private:
    static int m_B;
};
int Person ::m_B = 100;
int Person ::m_A = 100;
void test01(){
    Person p1;
    cout << p1.m_A << endl;
    Person p2;
    p2.m_A = 200;
    cout << p1.m_A << endl;
}
void test02(){
    //不属于某个对象
    //因此有两种访问方式
    //1.
    Person p;
    cout << p.m_A << endl;
    cout << Person::m_A << endl;
    // cout << Person::m_B << endl;  类外访问不到私有的静态成员变量
}
int main(){
    test02();
}