#include<iostream>
using namespace std;
//1 ���캯���ķ����Լ�����
//����
//    ���ղ�������  �޲ι���  �вι���
//    �������ͷ���  ��ͨ����  ��������
class Person{
public:
    //���캯��
    Person(){
        cout << "person���޲ι��캯������" << endl;
    }
    Person(int a){
        age = a;
        cout << "person���вι��캯������" << endl;
    }
    //�������캯��
    Person (const Person &p){    //���������޸����� ��Ҫ��const ����ʹ������
        //������������ϵ��������� ������������
        age = p.age;
        cout << "person�Ŀ������캯������" << endl;
    }
    ~Person(){
        cout << "person��������������" << endl;
    }
    int age;
};

void test01(){
    //1.���ŷ�
    // Person p1;   //Ĭ�Ϲ��캯���ĵ���
    // Person p2(10);
    // Person p3(p2);
    //ע������1
    //����Ĭ�Ϲ��캯��ʱ��Ҫд()
    //��Ϊ�������д������������Ϊ��һ������������ ������Ϊ�Ǵ�������
    //Person p1();
    // cout << "p2������Ϊ��" << p2.age << endl;
    // cout << "p3������Ϊ��" << p3.age << endl;
    
    //2.��ʾ��
    Person p1;
    Person p2 = Person(10);   
    Person p3 = Person(p2);
    //Person(10);   //�ȺŶ�������������� �ص㣺��ǰ��ִ�н���֮��ϵͳ���������������
    //ע������2
    //��Ҫ���ÿ������캯�� ��ʼ��������Ա
    //Person(p3) ���Ϸ����﷨  ��������Ϊ Person(p3) == Person p3;  ��Ϊ�Ƕ�������� �൱����������p3

    //3.��ʽת����
    Person p4 = 10;   //�൱��  Person p4 = Person(10)
    Person p5 = p4;   //���ÿ�������
} 

int main(){
    test01();
    
}