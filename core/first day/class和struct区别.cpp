#include<iostream>
using namespace std;
//struct默认访问权限为公共
//class默认访问权限为私有
class C1
{
public:
    int m_A;     //默认权限 是私有
    string m_Name;
};
struct C2
{
    int m_A;     //默认权限 是公共
};

int main (){
    C1 c1;
    //c1.m_A = 100;
    C2 c2;
    c1.m_A = 100;
    c1.m_Name = "sss";
}