#include<iostream>
using namespace std;
//�������Ϊ���Ա
class Phone{
public:
    string m_Pname;
    Phone (string pName){
        m_Pname = pName;
        cout << "phone�Ĺ��캯������" << endl;
    }
    ~Phone(){
        cout << "phone��������������" << endl;
    }
};
class Person{
public:
    Person(string name, string pName) : m_Name(name), m_Phone(pName){
        cout << "person�Ĺ��캯������" << endl;
    }
    ~Person(){
        cout << "person��������������" << endl;
    }
    string m_Name;
    Phone m_Phone;
};
//�������������Ϊ���Ա������ʶ���ȹ���������ٹ�������
//���������͹��캯���෴ �Ƚ����
void test01(){
    Person p("����", "ƻ��MAX");
    cout << p.m_Name << "����" << p.m_Phone.m_Pname << endl;
}
int main(){
    test01();
}