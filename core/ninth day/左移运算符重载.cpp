#include<iostream>
using namespace std;
//��������Զ������������
class Person{
    friend ostream &operator<<(ostream &cout, Person p1);
public:
    Person(int a,int b){
        m_A = a;
        m_B = b;
    }
private:
    //���ó�Ա���������������
    // void operator<<(cout){}
    //ͨ���������ó�Ա�����������������
    //ʵ����p.operator<<(cout)
    int m_A;
    int m_B;
};
//����ȫ�ֺ����������������
ostream &operator<<(ostream &cout,Person p){   //cout���������ܸ���ֻ������ ����ֱ��д�����ܽ��п���
    cout << "m_A = " << p.m_A << "  m_B = " << p.m_B << endl;
    return cout;
} //���� operator<<(cout,p) ��cout << p;
void test01()
{
    Person p(10, 10);
    //�������ǵ���p.ostream(cout, p)
    //����һ��cout  �൱��cout << p��ô�����cout
    cout << p << endl; 
}
int main(){
    test01();
}//const int * p