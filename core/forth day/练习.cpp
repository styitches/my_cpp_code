#include<iostream>
using namespace std;
//���ѧ�� ������ѧ��
//��ѧ������ѧ�Ÿ�ֵ  ������ʾ
class Student
{
public:
//���е����Ժ���Ϊ ͳ�Ƴ�Ա
//����  ��Ա���� ��Ա����
//��Ϊ  ��Ա���� ��Ա����
    string m_Name;    //����
    int m_Id;    //ѧ��
    //��Ϊ
    void showStudent()
    {
        cout << "name: " << m_Name << endl;
        cout << "id:" << m_Id << endl;
    }
    void SetName(string name)
    {
        m_Name = name;
    }
    void SetId(int id)
    {
        m_Id = id;
    }
};
int main(){
    //���������ѧ�� ʵ����
    Student s1;
    s1.m_Name = "����";
    s1.m_Id = 1;
    //��ʾ��Ϣ
    s1.showStudent();
    Student s2;
    s2.SetName("����");
    s2.SetId(2);
    s2.showStudent();
}