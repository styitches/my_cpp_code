#include<iostream>
using namespace std;
//�Ӻ����������
class Person{
public:
    int m_A;
    int m_B;
    //1.ͨ����Ա��������
    //���ʵ���Person p3 = p1.operator(p2);
    // Person operator+(Person &p){
    //     Person temp;
    //     temp.m_A = this->m_A + p.m_A;
    //     temp.m_B = this->m_B + p.m_B;
    //     return temp;
    // }
};
//2.ȫ�ֺ�������+
//���ʵ���Person p3 = operator(p1,p2);
Person operator+(Person &p1, Person &p2){
    Person temp;
    temp.m_B = p1.m_B + p2.m_B;
    temp.m_A = p1.m_A + p2.m_A;
    return temp;
}
Person operator+(Person &p1, int num){
    Person temp;
    temp.m_B = p1.m_B + num;
    temp.m_A = p1.m_A + num;
    return temp;
}
void test01(){
    Person p1;
    p1.m_A = 10;
    p1.m_B = 20;
    Person p2;
    p2.m_A = 30;
    p2.m_B = 40;
    Person p3;
    p3 = p1 + p2;
    //���������Ҳ���Է�����������
    Person p4;
    p4 = p1 + 100;
    cout << "p3.m_A = " << p3.m_A << endl;
    cout << "p3.m_B = " << p3.m_B << endl;
    cout << "p4.m_A = " << p4.m_A << endl;
    cout << "p4.m_B = " << p4.m_B << endl;
}

int main(){
    test01();
}