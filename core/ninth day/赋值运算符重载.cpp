#include<iostream>
using namespace std;
//cpp编译器至少会给一个类添加4个函数
//1.默认构造函数   无参 函数体为空
//2.默认析构函数   无参 函数体为空
//3.默认拷贝构造函数
//4.复制运算符operator=对属性进行 值拷贝
class Person{
public:
    Person(int age){
        m_Age = new int(age);
    }
    ~Person(){
        if(m_Age != NULL){
            delete m_Age;
            m_Age = NULL;
        }
    }
    Person& operator=(Person &p){    //如果返回值会进行拷贝构造新对象
        //编译器提供浅拷贝
        //m_Age = p.m_Age

        //应该先判断是否有属性在堆区，如果有显示放干净
        if(m_Age != NULL){
            delete m_Age;
            m_Age = NULL;
        }
        //深拷贝  如果有的属性创建在堆区 会进行内存重复释放
        m_Age = new int(*p.m_Age);

        //返回对象本身
        return *this;
    }
    int *m_Age;
};
void test01(){
    Person p1(18);
    Person p2(20);
    Person p3(30);
    // p2 = p1;     //赋值操作   相当于浅拷贝 进行了两次释放内存 程序崩溃
    p3 = p2 = p1;   //如果返回值为空是错误操作  则无法进行下一步赋值
    cout << "p1的年龄为" << *p1.m_Age << endl;
    cout << "p2的年龄为" << *p2.m_Age << endl;
    cout << "p3的年龄为" << *p3.m_Age << endl;
}
int main(){
    test01();
    // int a = 10;
    // int b = 20;
    // int c = 30;
    // c = b = a;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "c = " << c << endl;
    system("pause");
}