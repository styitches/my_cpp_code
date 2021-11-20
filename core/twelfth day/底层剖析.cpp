#include<iostream>
using namespace std;
//Animals类内部结构
//内置指针vfptr--虚函数（表）指针  virtual function pointer
//指向一个虚函数表vftable  表内部记录虚函数地址
//--------------------------------------------------------------
//|          &Animals::speak (虚函数的入口地址)                  |
//--------------------------------------------------------------
/*
如果没有重写
Cat类内部结构
内置指针vfptr--虚函数（表）指针  virtual function pointer
指向一个虚函数表vftable  表内部记录虚函数地址
--------------------------------------------------------------
|          &Animals::speak (虚函数的入口地址)                  |
--------------------------------------------------------------
*/
/*
如果子类重写的父类的虚函数   子类中的虚函数表内部会替换成子类的虚函数地址
内置指针vfptr--虚函数（表）指针  virtual function pointer
指向一个虚函数表vftable  表内部记录虚函数地址
----------------------------------------------------------
|          &Cat::speak (虚函数的入口地址)                  |
----------------------------------------------------------
*/
//当父类的指针或者引用指向子类对象时候，则发生了多态
//动物类
class Animals{
public:
    //虚函数
    virtual void speak(){   //非静态成员函数不存储在类内
        cout << "动物在说话" << endl;
    }

};
//猫类
class Cat : public Animals{
public:
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
void test02(){
    cout << "size of Animal = " << sizeof(Animals) << endl;
}
int main(){
    test02();
}