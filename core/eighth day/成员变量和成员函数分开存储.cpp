#include<iostream>
using namespace std;
//ֻ�зǾ�̬��Ա������������Ķ���
class Person{
public:
    int m_A;              //�Ǿ�̬��Ա����  ������Ķ�����
    static int m_B;       //��̬��Ա����  ��������Ķ�����
    void func(){}         //�Ǿ�̬��Ա����  ��������Ķ�����
    static void func2(){} //��̬��Ա����  ��������Ķ�����
};
int Person ::m_B = 100;
void test01(){
    Person p;
    //�ն���ռ��һ���ֽ�
    //c++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
    //ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
    cout << "size of p = " << sizeof(p) << endl;
}
void test02(){
    Person p1;
    cout << "size of p1 = " << sizeof(p1) << endl;
}
int main(){
    // test01();
    test02();
}