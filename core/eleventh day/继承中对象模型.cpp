#include<iostream>
using namespace std;
class Base{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son : public Base{
//�����е����зǾ�̬��Ա���Զ��ᱭ����̳���ȥ
//������˽�еĳ�Ա���� �Ǳ������������ˣ���˷��ʲ���������ȷʵ���̳���
public:
    int m_D;
};
void test01(){
    cout << "size of Son = " << sizeof(Son) << endl;
}
int main(){
    test01();
}