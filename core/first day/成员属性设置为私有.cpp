#include<iostream>
using namespace std;
//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��
class Person
{
public:
    //д����
    void SetName(string name)
    {
        m_Name = name;
    }
    string getName()
    {
        return m_Name;
    }
    //��ȡ����   �ɶ���д ������޸� ��Χ��0~150
    int getAge()
    {
        //m_Age = 0;   //��ʼ��
        return m_Age;
    }
    void setLover(string lover)
    {
        m_Lover = lover;
    }
    void setAge(int age)
    {
        if(age < 0 || age > 150)
        {
            m_Age  = 0;
            cout << "�����������!" << endl;
            return;
        }
        m_Age = age;
    }
private:
    string m_Name;  //�ɶ���д
    int m_Age;      //ֻ��
    string m_Lover; //ֻд

};
int main(){
    Person p;
    //p.m_Name = "����";
    p.SetName("����");
    cout << "����Ϊ ��" << p.getName() << endl;
    p.setAge(18);
    cout << "����Ϊ ��" << p.getAge() << endl;
    p.setLover("�Ծ�");
}