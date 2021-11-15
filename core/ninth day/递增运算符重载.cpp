#include<iostream>
using namespace std;
class MyInteger{
    friend ostream &operator<<(ostream &cout, MyInteger myint);

public:
    MyInteger(){
        m_Num = 0;
    }
    //重载++
    //前置++
    //返回引用是需要对同一个数据进行操作 不创建副本
    MyInteger& operator++(){
        //先进行++操作
        m_Num++;
        //返回自身
        return *this;
    }
    //后置++
    //int相当于占位参数 用于区分前置和后置地址
    MyInteger operator++(int){
        //先记录结果
        MyInteger temp = *this;
        //后递增
        m_Num++;
        //最后返回记录结果
        return temp;//局部变量不能返回引用
    }

private:
    int m_Num;
};
ostream& operator<<(ostream& cout,MyInteger myint){
    cout << myint.m_Num;
    return cout;
}
void test01(){
    MyInteger myint;
    cout << ++myint << endl;
}
void test02(){
    MyInteger myint;
    cout << myint++ << endl;
    cout << myint << endl;
}
int main(){
    // test01();
    test02();
}