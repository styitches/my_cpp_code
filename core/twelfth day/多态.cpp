#include<iostream>
using namespace std;
//多态分为两类：静态多态  动态多态
//静态多态：函数重载和运算符重载 复用函数名
//动态多态：派生类和虚函数实现运行时多态
//二者区别
//静态多态的函数地址早绑定  编译阶段确定函数的地址
//动态多态的函数地址晚绑定  运行阶段确定函数的地址



//动态多态的满足条件
//1、有继承关系
//2、子类要重写父类中的虚函数

//动态多态的使用
//父类的指针或者引用指向子类对象

//动物类
class Animals{
public:
    //虚函数
    virtual void speak(){
        cout << "动物在说话" << endl;
    }
};
//猫类
class Cat : public Animals{
public:
//重写   函数返回值类型 函数名 参数列表 完全相同 （virtual可写可不写）
    void speak(){
        cout << "小猫在说话" << endl;
    }
};
//狗类
class Dog : public Animals{
public:
    void speak(){
        cout << "小狗在说话" << endl;
    }
};
//执行说话函数
//地址早绑定   在编译阶段就确定了函数的地址
//如果想让猫说话，这个函数地址不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
void doSpeak(Animals &animal){   //Animal &animal = cat
//父类和子类可以直接使用不用转换
    animal.speak();
}
void test01(){
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}
int main(){
    test01();
}