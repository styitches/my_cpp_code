#include<iostream>
#include<string>
using namespace std;
    struct Student
    {
        //��Ա�б�

        //����
        string name;
        //����
        int age;
        //����
        int score;
    }s3;      //������s3����
int main(){
    //�ṹ�������Զ�����������ͣ������û��洢��ͬ����������
    //�﷨��struct �ṹ���� (�ṹ���Ա�б�)
    //1.struct �ṹ���� ������
    //2.struct �ṹ���� ������ = (��Ա1ֵ����Ա2ֵ����)
    //3.����ṹ��ʱ˳�㴴������


    //1.����ѧ������������ �� ѧ������(���������䣬����)

    //2.ͨ��ѧ�����ʹ�������ѧ��
    struct Student s1;       //�˴���struct����ʡ��
    s1.name = "����" ;       //����"."���ʱ���
    s1.age = 18;
    s1.score = 100;
    cout << "���� �� " << s1.name << " ���� �� " << s1.age << " ���� �� " << s1.score << endl;

    struct Student s2 = {"����" , 19 , 80 };
    cout << "���� �� " << s2.name << " ���� �� " << s2.age << " ���� �� " << s2.score << endl;


}   