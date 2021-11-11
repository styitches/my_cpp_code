#include<iostream>
using namespace std;
//类对象作为类成员
class Phone{
public:
    string m_Pname;
    Phone (string pName){
        m_Pname = pName;
        cout << "phone的构造函数调用" << endl;
    }
    ~Phone(){
        cout << "phone的析构函数调用" << endl;
    }
};
class Person{
public:
    Person(string name, string pName) : m_Name(name), m_Phone(pName){
        cout << "person的构造函数调用" << endl;
    }
    ~Person(){
        cout << "person的析构函数调用" << endl;
    }
    string m_Name;
    Phone m_Phone;
};
//当其他类对象作为类成员，构造识货先构造类对象，再构造自身
//析构函数和构造函数相反 先进后出
void test01(){
    Person p("张三", "苹果MAX");
    cout << p.m_Name << "拿着" << p.m_Phone.m_Pname << endl;
}
int main(){
    test01();
}