#include<iostream>
using namespace std;
//cpp���������ٻ��һ�������4������
//1.Ĭ�Ϲ��캯��   �޲� ������Ϊ��
//2.Ĭ����������   �޲� ������Ϊ��
//3.Ĭ�Ͽ������캯��
//4.���������operator=�����Խ��� ֵ����
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
    Person& operator=(Person &p){    //�������ֵ����п��������¶���
        //�������ṩǳ����
        //m_Age = p.m_Age

        //Ӧ�����ж��Ƿ��������ڶ������������ʾ�Ÿɾ�
        if(m_Age != NULL){
            delete m_Age;
            m_Age = NULL;
        }
        //���  ����е����Դ����ڶ��� ������ڴ��ظ��ͷ�
        m_Age = new int(*p.m_Age);

        //���ض�����
        return *this;
    }
    int *m_Age;
};
void test01(){
    Person p1(18);
    Person p2(20);
    Person p3(30);
    // p2 = p1;     //��ֵ����   �൱��ǳ���� �����������ͷ��ڴ� �������
    p3 = p2 = p1;   //�������ֵΪ���Ǵ������  ���޷�������һ����ֵ
    cout << "p1������Ϊ" << *p1.m_Age << endl;
    cout << "p2������Ϊ" << *p2.m_Age << endl;
    cout << "p3������Ϊ" << *p3.m_Age << endl;
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