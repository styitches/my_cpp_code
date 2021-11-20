#include<iostream>
#include<fstream>
using namespace std;
//二进制写完那就主要利用流文件调用成员函数write
//ostream write(const cha *buffer, int len)
//字符指针buffer指向内存中一段内存空间  len是读写的字节数
class Person{
public:
    char m_Name[64];       //尽量用字符数组代替string 否则容易出问题
    int m_Age;
};
void test01(){
    //创建流对象
    ofstream ofs("person.txt", ios::out | ios::binary); //有构造函数
    //打开文件
    // ofs.open("peron.txt", ios::out | ios::binary);
    //写文件
    Person p = {"张三", 18};
    ofs.write((const char *)&p, sizeof(Person));
    //关闭文件
    ofs.close();
}
int main(){
    test01();
}