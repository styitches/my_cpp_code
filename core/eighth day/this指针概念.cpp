#include<iostream>
using namespace std;
//ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ�� ����˵������͵Ķ���ṫ��һ�����
//this ָ��������ÿһ���Ǿ�̬��Ա������
//this ָ�벻��Ҫ���� ֱ��ʹ��
class Person{
public:
    Person (int age){
        // age = age;    ����������Ϊ������age��ͬһ��age
        this->age = age;
    }
    Person& PersonAddAge(Person &p){          //���õĺô��ǲ���Ҫ���·����ڴ�
        this->age += p.age;
        //this��ָ��p2��ָ�룬*this��ָ�����ı���
        return *this;
        //�������û�м�&�򷵻�һ��ֵ  
        //����ֻ�ᴴ����һ���������캯����������һ���µĶ���p2������������һ��
    }
    int age;
};
//1.������Ƴ�ͻ
//���������
//        �������m_age
//        this->age
//thisָ��ָ��� �����ó�Ա���� �����Ķ���  ��thisָ��p1
void test01(){
    Person p1(18);
    cout << "p1��������" << p1.age << endl;
}
//2.���ض�������*this
void test02(){
    Person p1(10);
    Person p2(20);
    // p2.PersonAddAge(p1);   ���û���޸��޷������ٴμ�����  ��Ϊ����ֵ��void ����û���˶���
    //��ʽ���˼��
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout << "p2������Ϊ" << p2.age << endl;
}
int main(){
    test02();
}