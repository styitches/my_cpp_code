#include<iostream>
using namespace std;
//���ع�ϵ�����== ��!=
class Person{
public:
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }
    // ����==
    bool operator==(Person &p){
        if(this->m_Name == p.m_Name && this->m_Age == p.m_Age){
            return true;
        }
        return false;
    }
    bool operator!=(Person &p){
        if(this->m_Name == m_Name && this->m_Age == m_Age){
            return false;
        }else{
            return true;
        }
    }
    string m_Name;
    int m_Age;
};
void test01(){
    Person p1("Tom", 28);
    Person p2("Jerry", 18);
    if(p1 == p2){
        cout << "p1��p2����ȵ�" << endl;
    }else{
        cout << "p1��p2�ǲ���ȵ�" << endl;
    }
    if(p1 != p2){
        cout << "p1��p2�ǲ���ȵ�" << endl;
    }else{
        cout << "p1��p2����ȵ�" << endl;
    }
}
int main(){
    test01();
}