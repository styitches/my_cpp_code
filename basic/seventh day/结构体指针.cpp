#include<iostream>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};
int main (){
    struct Student s = {"张三",18,100};
    //通过指针指向结构体变量
    struct Student * p = &s;        //10&13的student可以省略
    //通过指针访问结构体变量中的数据
    //利用结构体指针访问结构体变量需要->
    cout << "姓名" << p->name << endl;
    cout << "年龄" << p->age << endl;
    cout << "分数" << p->score << endl;
}