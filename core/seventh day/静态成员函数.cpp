#include<iostream>
using namespace std;
//��̬��Ա��Ա����
//���еĶ�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person{
public:
    static void func(){
        m_A = 100;   //��̬��Ա�����ܷ��ʾ�̬��Ա����
        //���ܷ��ʷǾ�̬��Ա����   ��Ϊ�����޷����ֵ������ĸ������m_B�޷��ж���p1����p2
        //��û�д������� ���Ǵ�����һ����
        cout << "static void func����" << endl;
    }
    static int m_A;   //��̬��Ա����
    int m_B;

    //��̬��Ա����Ҳ���з���Ȩ�޵�
    //�����޷�����˽�е�
};
int Person ::m_A = 0;    //��̬��Ա����Ҫ�����������������ʼ��
void test01(){
    //1.ͨ���������
    Person p;
    p.func();
    //2.ͨ����������
    Person ::func();
}
int main(){
    test01();
}