#include<iostream>
#include<string>
using namespace std;
   //�ṹ�����飺���Զ���Ľṹ����������з���ά��
    //�﷨��struct �ṹ���� ������[Ԫ�ظ���] = {{}��{}��{}����};
    //1.����ṹ��
struct Student 
{
    //����
    string name;
    //����
    int age;
    //����
    int score;
};
int main (){
    //2.�����ṹ������
    struct Student stuArray[3] = 
    {
        {"����",18,100},
        {"����",19,99},
        {"����",22,66}
    };
    //3.���ṹ�������е�Ԫ�ظ�ֵ
    stuArray[2].name = "����";
    stuArray[2].age = 55;
    stuArray[2].score = 49;
    //4.�����ṹ������
    for (int i = 0; i < 3; i++)
    {
        cout << "����" << stuArray[i].name << endl;
        cout << "����" << stuArray[i].age << endl;
        cout << "����" << stuArray[i].score << endl;
    }
}