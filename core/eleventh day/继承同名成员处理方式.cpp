#include<iostream>
using namespace std;
class Base{
public:
    Base(){
        m_A = 100;
    }

    void func(){
        cout << "Base - func()����" << endl;
    }
    void func(int a){
        cout << "Base - func(int a)����" << endl;
    }
    int m_A;
};
class Son : public Base{
public:
    Son(){
        m_A = 200;
    }
    void func(){
        cout << "Son - func()����" << endl;
    }
    int m_A;
};
//ͬ����Ա����
void test01(){
    Son s;
    cout << "Son�µ�m_A = " << s.m_A << endl;
    cout << "Base�µ�m_A = " << s.Base::m_A << endl;
    //ͨ�����������ʵ������еĳ�Ա��Ҫ��������
}
//ͬ����Ա����
void test02(){
    Son s;
    s.func();   //ֱ�ӵ��� ���õ��������е�ͬ����Ա
    s.Base::func();  //���ø���ļ�һ��������
    // s.func(100);     �﷨����  
    //��������г����˺͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص����и�����ͬ���ĳ�Ա����
    //�����Ҫ���ʸ����б����ص�ͬ����Ա��������Ҫ��������
    s.Base::func(100);
}
int main(){
    test01();
    test02();
}