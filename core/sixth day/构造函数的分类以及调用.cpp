#include<iostream>
using namespace std;
//1 构造函数的分类以及调用
//分类
//    按照参数分类  无参构造  有参构造
//    按照类型分类  普通构造  拷贝构造
class Person{
public:
    //构造函数
    Person(){
        cout << "person的无参构造函数调用" << endl;
    }
    Person(int a){
        age = a;
        cout << "person的有参构造函数调用" << endl;
    }
    //拷贝构造函数
    Person (const Person &p){    //拷贝不能修改内容 需要加const 并且使用引用
        //将传入的人身上的所有属性 拷贝到我身上
        age = p.age;
        cout << "person的拷贝构造函数调用" << endl;
    }
    ~Person(){
        cout << "person的析构函数调用" << endl;
    }
    int age;
};

void test01(){
    //1.括号法
    // Person p1;   //默认构造函数的调用
    // Person p2(10);
    // Person p3(p2);
    //注意事项1
    //调用默认构造函数时候不要写()
    //因为下面这行代码编译器会认为是一个函数的声明 不会认为是创建对象
    //Person p1();
    // cout << "p2的年龄为：" << p2.age << endl;
    // cout << "p3的年龄为：" << p3.age << endl;
    
    //2.显示法
    Person p1;
    Person p2 = Person(10);   
    Person p3 = Person(p2);
    //Person(10);   //等号对象叫做匿名对象 特点：当前行执行结束之后，系统立马回收匿名对象
    //注意事项2
    //不要利用拷贝构造函数 初始化匿名成员
    //Person(p3) 不合法的语法  编译器认为 Person(p3) == Person p3;  认为是对象的声明 相当于有了两个p3

    //3.隐式转换法
    Person p4 = 10;   //相当于  Person p4 = Person(10)
    Person p5 = p4;   //调用拷贝构造
} 

int main(){
    test01();
    
}