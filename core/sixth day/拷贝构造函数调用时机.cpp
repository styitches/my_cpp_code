#include<iostream>
using namespace std;
//拷贝函数调用时机

//1.使用一个已经创建哇你比的对象进行初始化一个新对象

//2.值传递的方式给函数参数传值

//3.值传递返回局部对象

class Person{
private:
    int m_Age;

public:
    Person(){
        cout << "Person默认构造函数调用" << endl;
    }
    Person(int age){
        m_Age = age;
        cout << "Person有参构造函数调用" << endl;
    }
    Person(const Person &p){
        m_Age = p.m_Age;
        cout << "Person拷贝构造函数调用" << endl;
    }
    ~Person(){
        cout << "Person的析构函数调用" << endl;
    }
};
void test01(){
    Person p1(20);
    Person p2(p1);
}
//值传递的方式给函数参数传值
void doWork(Person p){

}
void test02(){
    Person p; //默认构造
    doWork(p);//实参传给形参  值传递是临时的修改 不会影响实参
}
//值方式返回局部对象
Person doWork2(){
    Person p1;
    //cout << &p1 << endl;
    return p1; //返回的时候会拷贝副本给左值
}
void test03(){
    Person p = doWork2();
    //cout << &p << endl;
}
int main (){
    //test01();
    //test02();
    test03();
}