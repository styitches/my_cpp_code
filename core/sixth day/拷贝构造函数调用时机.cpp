#include<iostream>
using namespace std;
//������������ʱ��

//1.ʹ��һ���Ѿ���������ȵĶ�����г�ʼ��һ���¶���

//2.ֵ���ݵķ�ʽ������������ֵ

//3.ֵ���ݷ��ؾֲ�����

class Person{
private:
    int m_Age;

public:
    Person(){
        cout << "PersonĬ�Ϲ��캯������" << endl;
    }
    Person(int age){
        m_Age = age;
        cout << "Person�вι��캯������" << endl;
    }
    Person(const Person &p){
        m_Age = p.m_Age;
        cout << "Person�������캯������" << endl;
    }
    ~Person(){
        cout << "Person��������������" << endl;
    }
};
void test01(){
    Person p1(20);
    Person p2(p1);
}
//ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p){

}
void test02(){
    Person p; //Ĭ�Ϲ���
    doWork(p);//ʵ�δ����β�  ֵ��������ʱ���޸� ����Ӱ��ʵ��
}
//ֵ��ʽ���ؾֲ�����
Person doWork2(){
    Person p1;
    //cout << &p1 << endl;
    return p1; //���ص�ʱ��´����������ֵ
}
void test03(){
    Person p = doWork2();
    //cout << &p << endl;
}
int main (){
    //test01();
    //test02();
    test03();
}