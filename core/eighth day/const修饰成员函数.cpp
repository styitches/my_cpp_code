#include<iostream>
using namespace std;
//常函数
class Person{
public:
    //this 指针的本质是指针常量  Person *const this
    //指针指向不可以修改 
    void showPerson() const{   //加上const之后内部的东西是双const指针
        // m_A = 100;   错误  const Person * this = this;
        //this->m_A = m_A;
        m_B = 100;
    }
    void func(){}   //这个函数可以修改m_A
    Person(){  //默认构造函数
    }
    int m_A;
    mutable int m_B; //特殊变量，即使在常函数中也可以修改  加上mutable关键字
};
//常对象
void test02(){
    const Person p;  //对象前加const 变为常对象
    p.m_B = 100;
    // p.m_A = 100;   在常对象夏也可以修改

    //常对象只能调用常函数
    // p.func();   如果普通函数可以调用普通函数则属性呗修改
}