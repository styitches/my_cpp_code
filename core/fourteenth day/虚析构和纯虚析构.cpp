#include<iostream>
using namespace std;
//多态使用时，如果子类中有熟悉开辟到堆区，那么父类指针在释放时候无法调用到子类的析构代码
//虚析构和纯虚析构的共性：可以解决父类指针释放子类对象  都需要有具体的函数实现
//区别：如果是纯虚析构该类属于抽象类，无法实例化
//如果子类中没有堆区数据，可以不写虚析构或者纯虚析构
class Animal{
public:
    Animal(){
        cout << "Animal的构造函数调用" << endl;
    }
    /*
    利用虚析构可以解决，父类指针释放子类对象时候不干净的问题
    virtual ~Animal(){
        cout << "Animal的析构函数调用" << endl;
    }
    */
    //纯虚析构  如果父类中也有开辟到堆区的数据，则也需要进行具体的函数实现
    //有了纯虚析构之后 这个类也属于抽象类 无法实例化对象
    virtual ~Animal() = 0; //纯虚析构也可以解决该问题
    //纯虚函数
    virtual void speak() = 0;
};
Animal::~Animal(){
    cout << "Animal的纯虚析构函数" << endl;
}
class Cat : public Animal{
public:
    Cat(string name){
        cout << "Cat的构造函数调用" << endl;
        m_Name = new string(name);
    }
    ~Cat(){
        if(m_Name != NULL){
            cout << "Cat的析构函数调用" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }
    void speak(){
        cout << *m_Name << "小猫在说话" << endl;
    }

    string *m_Name;
};
void test01(){
    Animal *animal = new Cat("Tom ");
    animal->speak();  //没有调用Cat的析构说明堆区内存没有释放干净，导致内存泄漏
    //父类指针在析构时候，不会调用子类中析构函数，导致子类如果有堆区属性，则出现内存泄漏
    delete animal;
}
int main(){
    test01();
}