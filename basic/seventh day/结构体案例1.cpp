#include<iostream>
#include<ctime>
using namespace std;
struct Student
{
    string sName;
    int score;
};
struct Teacher
{
    string tName;
    struct Student sArray[5];

};
void allocateSpace(Teacher tArray[],int len)
{
    string nameSeed = "ABCDE";
    //给老师赋值
    for (int i = 0; i < len; i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];
    //通过循环给学生赋值
        for (int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += nameSeed[j];
            int random = rand() % 61 + 40;    //40~100分
            tArray[i].sArray[j].score = random;
        }
    }
}
void printInfo(struct Teacher tArry[],int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师姓名 ： " << tArry[i].tName << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\t学生姓名 ： " << tArry[i].sArray->sName << 
                    "考试分数 : " << tArry[i].sArray->score << endl;

        }
    }
}
int main(){
    //随机数种子
    srand((unsigned int)time(NULL));
    //创建三个老师的数组
    //通过函数给三个老师赋值，并且给老师带的学生赋值
    //打印所有信息
    Teacher tArray[3];
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray,len);
    printInfo(tArray,len);
}