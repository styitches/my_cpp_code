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
    //����ʦ��ֵ
    for (int i = 0; i < len; i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];
    //ͨ��ѭ����ѧ����ֵ
        for (int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += nameSeed[j];
            int random = rand() % 61 + 40;    //40~100��
            tArray[i].sArray[j].score = random;
        }
    }
}
void printInfo(struct Teacher tArry[],int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "��ʦ���� �� " << tArry[i].tName << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\tѧ������ �� " << tArry[i].sArray->sName << 
                    "���Է��� : " << tArry[i].sArray->score << endl;

        }
    }
}
int main(){
    //���������
    srand((unsigned int)time(NULL));
    //����������ʦ������
    //ͨ��������������ʦ��ֵ�����Ҹ���ʦ����ѧ����ֵ
    //��ӡ������Ϣ
    Teacher tArray[3];
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray,len);
    printInfo(tArray,len);
}