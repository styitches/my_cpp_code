#include<iostream>
#include<string>
using namespace std;
   //结构体数组：将自定义的结构体放入数组中方便维护
    //语法：struct 结构体名 数组名[元素个数] = {{}，{}，{}……};
    //1.定义结构体
struct Student 
{
    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
};
int main (){
    //2.创建结构体数组
    struct Student stuArray[3] = 
    {
        {"张三",18,100},
        {"李四",19,99},
        {"王五",22,66}
    };
    //3.给结构体数组中的元素赋值
    stuArray[2].name = "赵六";
    stuArray[2].age = 55;
    stuArray[2].score = 49;
    //4.遍历结构体数组
    for (int i = 0; i < 3; i++)
    {
        cout << "姓名" << stuArray[i].name << endl;
        cout << "年龄" << stuArray[i].age << endl;
        cout << "分数" << stuArray[i].score << endl;
    }
}