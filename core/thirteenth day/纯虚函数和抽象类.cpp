#include<iostream>
using namespace std;
//���麯���﷨��virtual ����ֵ���� ������ (�����б�) = 0;
//���������˴��麯����������Ϊ������
//�ص㣺�޷�ʵ��������    ���������д�������еĴ��麯��������Ҳ���ڳ�����
class Base{
public:
    //���麯��
    //ֻҪ��һ�����麯���������ͳ�Ϊ������
    virtual void func() = 0;
};
class Son : public Base{
public:
    void func(){
        cout << "func��������" << endl;
    }
};
void test01(){
    //�޷�ʵ��������
    // Base b;
    // new Base;
    Son s;    //���û����д������Ҳ�Ǵ��麯�����޷�ʵ��������
    Base *base = new Son;
    base->func();
    
}
int main(){
    test01();
}