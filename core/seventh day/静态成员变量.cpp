#include<iostream>
using namespace std;
//��̬��Ա����
//���ö�����һ������
//�ڱ���׶η����ڴ�
//�������� �����ʼ��   ����Ĳ���
class Person{
public:
    static int m_A;
private:
    static int m_B;
};
int Person ::m_B = 100;
int Person ::m_A = 100;
void test01(){
    Person p1;
    cout << p1.m_A << endl;
    Person p2;
    p2.m_A = 200;
    cout << p1.m_A << endl;
}
void test02(){
    //������ĳ������
    //��������ַ��ʷ�ʽ
    //1.
    Person p;
    cout << p.m_A << endl;
    cout << Person::m_A << endl;
    // cout << Person::m_B << endl;  ������ʲ���˽�еľ�̬��Ա����
}
int main(){
    test02();
}