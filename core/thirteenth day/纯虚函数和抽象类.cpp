#include<iostream>
using namespace std;
//纯虚函数语法：virtual 返回值类型 函数名 (参数列表) = 0;
//当类中有了纯虚函数，这个类成为抽象类
//特点：无法实例化对象    子类必须重写抽象类中的纯虚函数，否则也属于抽象类
class Base{
public:
    //纯虚函数
    //只要有一个纯虚函数，这个类就成为抽象类
    virtual void func() = 0;
};
class Son : public Base{
public:
    void func(){
        cout << "func函数调用" << endl;
    }
};
void test01(){
    //无法实例化对象
    // Base b;
    // new Base;
    Son s;    //如果没有重写，子类也是纯虚函数，无法实例化对象
    Base *base = new Son;
    base->func();
    
}
int main(){
    test01();
}