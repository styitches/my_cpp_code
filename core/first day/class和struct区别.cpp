#include<iostream>
using namespace std;
//structĬ�Ϸ���Ȩ��Ϊ����
//classĬ�Ϸ���Ȩ��Ϊ˽��
class C1
{
public:
    int m_A;     //Ĭ��Ȩ�� ��˽��
    string m_Name;
};
struct C2
{
    int m_A;     //Ĭ��Ȩ�� �ǹ���
};

int main (){
    C1 c1;
    //c1.m_A = 100;
    C2 c2;
    c1.m_A = 100;
    c1.m_Name = "sss";
}