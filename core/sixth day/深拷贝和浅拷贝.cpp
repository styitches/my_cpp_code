#include<iostream>
using namespace std;
//ǳ����  �򵥵ĸ�ֵ��������
//���  �ڶ��������ڴ���п���
class Person {
public:
    Person(){
        cout << "Person��Ĭ�Ϲ��캯������" << endl;
    }
    Person(int a, int height){
        m_Age = a;
        m_Height = new int(height); //new�ķ���ֵ�ǵ�ַ
        cout << "Person���вι��캯������" << endl;
    }
    Person(const Person &p){
        cout << "Person�Ŀ������캯������" << endl;
        //�������
        m_Height = new int(*p.m_Height);
    }
    ~Person (){
        //ͨ�����������ٵ����ݽ����ͷ�
        if(m_Height != NULL){
            delete m_Height;
            m_Height = NULL;
        }
        cout << "Person��������������" << endl;
    }
    //ǳ�����������������ڴ��ظ��ͷ�
    //������ѭ�Ƚ����  p1�ȱ����� ���ͷ�  �����ͷ�p2�Ķ��� Ȼ��ָ��ָ��Ķ������ͷ�
    //������� �� ���  ���¿��ٶ����ڴ� �ҵ��µ�ַ ���Ǵ洢���ݻ�����ͬ��ֵ
    int m_Age;
    int *m_Height;
};
void test01(){
    Person p1(18, 160);
    cout << "p1������Ϊ: " << p1.m_Age << " ���Ϊ: " << *p1.m_Height << endl;
    Person p2(p1);
    cout << "p2������Ϊ" << p2.m_Age << endl;
}
int main(){
    test01();
}