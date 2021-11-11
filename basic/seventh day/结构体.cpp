#include<iostream>
#include<string>
using namespace std;
    struct Student
    {
        //成员列表

        //姓名
        string name;
        //年龄
        int age;
        //分数
        int score;
    }s3;      //创建了s3变量
int main(){
    //结构体属于自定义的数据类型，允许用户存储不同的数据类型
    //语法：struct 结构体名 (结构体成员列表)
    //1.struct 结构体名 变量名
    //2.struct 结构体名 变量名 = (成员1值，成员2值……)
    //3.定义结构体时顺便创建变量


    //1.创建学生的数据类型 ： 学生包括(姓名，年龄，分数)

    //2.通过学生类型创建具体学生
    struct Student s1;       //此处的struct可以省略
    s1.name = "张三" ;       //利用"."访问变量
    s1.age = 18;
    s1.score = 100;
    cout << "姓名 ： " << s1.name << " 年龄 ： " << s1.age << " 分数 ： " << s1.score << endl;

    struct Student s2 = {"李四" , 19 , 80 };
    cout << "姓名 ： " << s2.name << " 年龄 ： " << s2.age << " 分数 ： " << s2.score << endl;


}   