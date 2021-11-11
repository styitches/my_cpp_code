#include<iostream>
using namespace std;
//定义学生结构体
struct student
{
    string name;
    int age;
    int score;
};
//定义老师结构体
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
    t.name = "老王";
    t.age = 25;
    t.stu.age = 11;
    t.stu.name = "小王";
    t.stu.score = 70;
    cout << t.stu.name << endl;
}
