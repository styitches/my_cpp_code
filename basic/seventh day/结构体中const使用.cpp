//使用const防止错误修改
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
    cout << "姓名 ： " << s->name << " 年龄 ： " << s->age << " 分数 ： " << s->score << endl;
}
//加入const一旦有修改就会报错   防止我们误操作
int main(){
    student s = { "张三",15,70};
    //通过函数打印结构体变量信息
    printStudent(&s);   //实参中的s与形参中是s不是一个s
    //若是s有许多数据  进行拷贝时候会运行很慢   大多数时候会传入指针 进行减少内存空间 并且不会复制新的副本出来
    //若是在地址传递中函数内部修改了参数会导致主函数中修改数据
}