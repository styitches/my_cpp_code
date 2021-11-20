#include<iostream>
using namespace std;
class Base{
public:
    static int m_A;
    static void func(){
        cout << "Base - static void func()" << endl;
    }
    static void func(int a){
        cout << "Base - static void func(int a)" << endl;
    }
};
int Base::m_A = 100;
class Son : public Base{
public:
    static int m_A;
    static void func(){
        cout << "Son - static void func()" << endl;
    }
};
int Son::m_A = 200;
//ͬ����̬��Ա����
void test01(){
    //1.ͨ���������
    Son s;
    cout << "Base�µ�m_A = " << s.Base::m_A << endl;
    cout << "Son�µ�m_A = " << s.m_A << endl;
    //2.ͨ����������
    cout << "Son�µ�m_A = " << Son::m_A << endl;
    //��һ����������ͨ��������ʽ���� �ڶ�������������ʸ�����������
    cout << "Base�µ�m_A = " << Son::Base::m_A << endl;
}
void test02(){
    //1.ͨ���������
    Son s;
    s.func();
    s.Base::func();
    //2.ͨ����������
    Son::func();
    Son::Base::func();
    //������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ��������е�ͬ����Ա����
    Son::Base::func(100);
}
int main(){
    test02();
}