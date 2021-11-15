#include<iostream>
using namespace std;
//继承方式： 公共继承 保护继承 私有继承
//公共继承
class Base1{
    friend void test01();
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son1 : public Base1{

public:
    void func(){
        m_A = 10;    //父类公共权限成员 到子类依然是公共权限
        m_B = 10;    //父类保护权限成员 到子类依然是保护权限
        // m_C = 10;    //父类私有权限成员 到子类访问不到
    }
};
void test01(){
    Son1 s1;
    s1.m_A = 100;
    // s1.m_B = 100;  //类内可以访问 类外不可以   在父类或子类中添加即可
}
//保护继承
class Base2{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son2 : protected Base2{
public:
    void func(){
        m_A = 100;        //父类中公共成员 到子类中变成保护权限
        m_B = 100;        //父类中保护成员 到子类中变成保护权限
        // m_C = 100;    父类中私有成员 子类访问不到
    }
};
void test02(){
    Son2 s2;
    // s2.m__A = 1000;     在son2中m_A变成了保护权限，因此类外访问不到
}
//私有继承
class Base3{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son3 : private Base3{

public:
    void func(){
        m_A = 100;    //父类中公共成员到子类变成私有成员
        m_B = 100;    //同样
        // m_C = 100;    //父类中私有成员子类访问不到
    }
};
class GrandSon : public Son3{
public:
    void func(){
        // m_A = 1000;   到son3中m_A 变成私有，即使是儿子也访问不到
    }
};
void test03(){
    Son3 s3;
    // s3.m_A = 100;    //到s3变为私有成员类外访问不到
}