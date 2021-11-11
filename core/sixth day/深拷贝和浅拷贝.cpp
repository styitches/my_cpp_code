#include<iostream>
using namespace std;
//浅拷贝  简单的赋值拷贝操作
//深拷贝  在堆区申请内存进行拷贝
class Person {
public:
    Person(){
        cout << "Person的默认构造函数调用" << endl;
    }
    Person(int a, int height){
        m_Age = a;
        m_Height = new int(height); //new的返回值是地址
        cout << "Person的有参构造函数调用" << endl;
    }
    Person(const Person &p){
        cout << "Person的拷贝构造函数调用" << endl;
        //深拷贝操作
        m_Height = new int(*p.m_Height);
    }
    ~Person (){
        //通常将堆区开辟的数据进行释放
        if(m_Height != NULL){
            delete m_Height;
            m_Height = NULL;
        }
        cout << "Person的析构函数调用" << endl;
    }
    //浅拷贝带来的问题是内存重复释放
    //对象遵循先进后出  p1先被调用 后被释放  首先释放p2的东西 然后指针指向的东西被释放
    //解决方法 ： 深拷贝  重新开辟堆区内存 找到新地址 但是存储数据还是相同的值
    int m_Age;
    int *m_Height;
};
void test01(){
    Person p1(18, 160);
    cout << "p1的年龄为: " << p1.m_Age << " 身高为: " << *p1.m_Height << endl;
    Person p2(p1);
    cout << "p2的年龄为" << p2.m_Age << endl;
}
int main(){
    test01();
}