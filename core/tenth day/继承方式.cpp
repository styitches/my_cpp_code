#include<iostream>
using namespace std;
//�̳з�ʽ�� �����̳� �����̳� ˽�м̳�
//�����̳�
class Base1{
    friend void test01();
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son1 : public Base1{

public:
    void func(){
        m_A = 10;    //���๫��Ȩ�޳�Ա ��������Ȼ�ǹ���Ȩ��
        m_B = 10;    //���ౣ��Ȩ�޳�Ա ��������Ȼ�Ǳ���Ȩ��
        // m_C = 10;    //����˽��Ȩ�޳�Ա ��������ʲ���
    }
};
void test01(){
    Son1 s1;
    s1.m_A = 100;
    // s1.m_B = 100;  //���ڿ��Է��� ���ⲻ����   �ڸ������������Ӽ���
}
//�����̳�
class Base2{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son2 : protected Base2{
public:
    void func(){
        m_A = 100;        //�����й�����Ա �������б�ɱ���Ȩ��
        m_B = 100;        //�����б�����Ա �������б�ɱ���Ȩ��
        // m_C = 100;    ������˽�г�Ա ������ʲ���
    }
};
void test02(){
    Son2 s2;
    // s2.m__A = 1000;     ��son2��m_A����˱���Ȩ�ޣ����������ʲ���
}
//˽�м̳�
class Base3{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son3 : private Base3{

public:
    void func(){
        m_A = 100;    //�����й�����Ա��������˽�г�Ա
        m_B = 100;    //ͬ��
        // m_C = 100;    //������˽�г�Ա������ʲ���
    }
};
class GrandSon : public Son3{
public:
    void func(){
        // m_A = 1000;   ��son3��m_A ���˽�У���ʹ�Ƕ���Ҳ���ʲ���
    }
};
void test03(){
    Son3 s3;
    // s3.m_A = 100;    //��s3��Ϊ˽�г�Ա������ʲ���
}