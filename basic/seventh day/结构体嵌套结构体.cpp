#include<iostream>
using namespace std;
//����ѧ���ṹ��
struct student
{
    string name;
    int age;
    int score;
};
//������ʦ�ṹ��
struct teacher
{
    int id;
    string name;
    int age;
    struct student stu;
};
int main (){
    teacher t;
    t.id = 1000;
    t.name = "����";
    t.age = 25;
    t.stu.age = 11;
    t.stu.name = "С��";
    t.stu.score = 70;
    cout << t.stu.name << endl;
}
