//ʹ��const��ֹ�����޸�
#include<iostream>
using namespace std;
struct student 
{
    string name;
    int age ;
    int score;
};
void printStudent(const student *s)
{
    cout << "���� �� " << s->name << " ���� �� " << s->age << " ���� �� " << s->score << endl;
}
//����constһ�����޸ľͻᱨ��   ��ֹ���������
int main(){
    student s = { "����",15,70};
    //ͨ��������ӡ�ṹ�������Ϣ
    printStudent(&s);   //ʵ���е�s���β�����s����һ��s
    //����s���������  ���п���ʱ������к���   �����ʱ��ᴫ��ָ�� ���м����ڴ�ռ� ���Ҳ��Ḵ���µĸ�������
    //�����ڵ�ַ�����к����ڲ��޸��˲����ᵼ�����������޸�����
}