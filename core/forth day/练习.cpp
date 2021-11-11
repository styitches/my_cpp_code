#include<iostream>
using namespace std;
//设计学生 有姓名学号
//给学生姓名学号赋值  并且显示
class Student
{
public:
//类中的属性和行为 统称成员
//属性  成员属性 成员变量
//行为  成员函数 成员方法
    string m_Name;    //姓名
    int m_Id;    //学号
    //行为
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
    //创建具体的学生 实例化
    Student s1;
    s1.m_Name = "张三";
    s1.m_Id = 1;
    //显示信息
    s1.showStudent();
    Student s2;
    s2.SetName("李四");
    s2.SetId(2);
    s2.showStudent();
}