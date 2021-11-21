#include<iostream>
using namespace std;
class Student{
public:
    Student(){};
    Student(char id[9], char name[8], int score, char remark[20]){}

    void showStudent(Student &p){}
    void searchStudent(){}
    int getScore(){}


    char m_ID[9];
    char m_Name[8];
    int m_Score;
    char m_Remark[20];
};
Student::Student(char id[9], char name[8], int score, char remark[20]){
    m_ID[9] = id[9];
    m_Name[8] = name[8];
    m_Score = score;
    m_Remark[20] = remark[20];
}
void Student::showStudent(Student &p){
    cout << p;
}
int Student::getScore(){
    return m_Score;
}
void operator<<(ostream &cout, Student &p){
    cout << "姓名：" << p.m_Name << " 学号：" << p.m_ID << " 成绩：" << p.m_Score << " 备注：" << p.m_Remark << endl;
}
void sortStudent(Student *student, int count){
    int x, y;
    Student temp;
    for (y = 0; y < count; y++){
        for (x = 1; x < count; x++){
            if((student[x].getScore()) > (student[x-1].getScore())){
                temp = student[x - 1];
                student[x - 1] = student[x];
                student[x] = temp;
            }
        }
    }
}
