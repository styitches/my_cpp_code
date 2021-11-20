#include<iostream>
using namespace std;
//子类继承父类之后，当创建子类对象，也会调用父类中的构造函数
class Base{
public:
    Base(){
        cout << "Base的构造函数" << endl;
    }
    ~Base(){
        cout << "Base的析构函数" << endl;
    }
};
class Son : public Base{
public:
    Son(){
        cout << "Son的构造函数" << endl;
    }
    ~Son(){
        cout << "Son的析构函数" << endl;
    }
};
void test01(){
    // Base b;
    Son s;      //先进后出
    //先构造父类，再构造子类
}
int main(){
    test01();
}