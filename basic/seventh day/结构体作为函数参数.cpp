#include<iostream>
using namespace std;
//�ṹ����Ϊ��������
//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ
struct student 
{
    int age ;
    int score;
    string name;
};
//��ӡѧ����Ϣ
//1.ֵ����     �βθı䲻��Ӱ��ʵ��
void printStudent1 (struct student s)
{
    s.age = 100;
    cout << "�Ӻ���1�� ���� : " << s.name << " ���� �� " << s.age << " ���� �� " << s.score << endl;
}
//2.��ַ����   �βθı��Ӱ��ʵ��
void printStudent2 (struct student * p)
{
    cout << "�Ӻ���2�� ���� ��" << p -> name << " ���� �� " << p -> age << " ���� �� " << p -> score << endl;
}
int main (){
    struct student s;
    s.age = 19;
    s.name = "����";
    s.score = 100;
    
    printStudent1(s);
    cout << "main�����д�ӡ�Ľ��  ���� ��" << s.age << " ���� �� " << s.name << " ���� �� " << s.score << endl;
    // printStudent2(&s);
    // cout << "main�����д�ӡ�Ľ��  ���� ��" << s.age << " ���� �� " << s.name << " ���� �� " << s.score << endl;
    system("pause");
    return 0 ;
}