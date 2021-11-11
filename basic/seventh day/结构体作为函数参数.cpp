#include<iostream>
using namespace std;
//结构体作为函数参数
//将学生传入到一个参数中，打印学生身上的所有信息
struct student 
{
    int age ;
    int score;
    string name;
};
//打印学生信息
//1.值传递     形参改变不会影响实参
void printStudent1 (struct student s)
{
    s.age = 100;
    cout << "子函数1中 姓名 : " << s.name << " 年龄 ： " << s.age << " 分数 ： " << s.score << endl;
}
//2.地址传递   形参改变会影响实参
void printStudent2 (struct student * p)
{
    cout << "子函数2中 姓名 ：" << p -> name << " 年龄 ： " << p -> age << " 分数 ： " << p -> score << endl;
}
int main (){
    struct student s;
    s.age = 19;
    s.name = "张三";
    s.score = 100;
    
    printStudent1(s);
    cout << "main函数中打印的结果  年龄 ：" << s.age << " 姓名 ： " << s.name << " 分数 ： " << s.score << endl;
    // printStudent2(&s);
    // cout << "main函数中打印的结果  年龄 ：" << s.age << " 姓名 ： " << s.name << " 分数 ： " << s.score << endl;
    system("pause");
    return 0 ;
}