#include<iostream>
using namespace std;
//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据的有效性
class Person
{
public:
    //写姓名
    void SetName(string name)
    {
        m_Name = name;
    }
    string getName()
    {
        return m_Name;
    }
    //获取年龄   可读可写 如果想修改 范围是0~150
    int getAge()
    {
        //m_Age = 0;   //初始化
        return m_Age;
    }
    void setLover(string lover)
    {
        m_Lover = lover;
    }
    void setAge(int age)
    {
        if(age < 0 || age > 150)
        {
            m_Age  = 0;
            cout << "你这个老妖精!" << endl;
            return;
        }
        m_Age = age;
    }
private:
    string m_Name;  //可读可写
    int m_Age;      //只读
    string m_Lover; //只写

};
int main(){
    Person p;
    //p.m_Name = "张三";
    p.SetName("张三");
    cout << "姓名为 ：" << p.getName() << endl;
    p.setAge(18);
    cout << "年龄为 ：" << p.getAge() << endl;
    p.setLover("苍井");
}