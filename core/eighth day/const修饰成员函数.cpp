#include<iostream>
using namespace std;
//������
class Person{
public:
    //this ָ��ı�����ָ�볣��  Person *const this
    //ָ��ָ�򲻿����޸� 
    void showPerson() const{   //����const֮���ڲ��Ķ�����˫constָ��
        // m_A = 100;   ����  const Person * this = this;
        //this->m_A = m_A;
        m_B = 100;
    }
    void func(){}   //������������޸�m_A
    Person(){  //Ĭ�Ϲ��캯��
    }
    int m_A;
    mutable int m_B; //�����������ʹ�ڳ�������Ҳ�����޸�  ����mutable�ؼ���
};
//������
void test02(){
    const Person p;  //����ǰ��const ��Ϊ������
    p.m_B = 100;
    // p.m_A = 100;   �ڳ�������Ҳ�����޸�

    //������ֻ�ܵ��ó�����
    // p.func();   �����ͨ�������Ե�����ͨ�������������޸�
}