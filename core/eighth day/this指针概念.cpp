#include<iostream>
using namespace std;
//每一个非静态成员函数只会诞生一份函数实例 就是说多个类型的对象会公用一块代码
//this 指针隐含在每一个非静态成员函数内
//this 指针不需要定义 直接使用
class Person{
public:
    Person (int age){
        // age = age;    编译器会认为这三个age的同一份age
        this->age = age;
    }
    Person& PersonAddAge(Person &p){          //引用的好处是不需要重新分配内存
        this->age += p.age;
        //this是指向p2的指针，*this是指向对象的本体
        return *this;
        //如果返回没有加&则返回一个值  
        //返回只会创建了一个拷贝构造函数，生成了一个新的对象，p2‘继续进行下一步
    }
    int age;
};
//1.解决名称冲突
//解决方法：
//        定义变量m_age
//        this->age
//this指针指向的 被调用成员函数 所属的对象  即this指向p1
void test01(){
    Person p1(18);
    cout << "p1的年龄是" << p1.age << endl;
}
//2.返回对象本身用*this
void test02(){
    Person p1(10);
    Person p2(20);
    // p2.PersonAddAge(p1);   如果没有修改无法进行再次加年龄  因为返回值是void 后面没有了对象
    //链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout << "p2的年龄为" << p2.age << endl;
}
int main(){
    test02();
}