#include<iostream>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};
int main (){
    struct Student s = {"����",18,100};
    //ͨ��ָ��ָ��ṹ�����
    struct Student * p = &s;        //10&13��student����ʡ��
    //ͨ��ָ����ʽṹ������е�����
    //���ýṹ��ָ����ʽṹ�������Ҫ->
    cout << "����" << p->name << endl;
    cout << "����" << p->age << endl;
    cout << "����" << p->score << endl;
}