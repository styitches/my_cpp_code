#include<fstream>
#include<iostream>
using namespace std;
class Person{
public:
    char m_Name[64];
    int m_Age;
};
void test01(){
    //创建流对象
    ifstream ifs;
    //打开文件 判断是否打开成功
    ifs.open("person.txt", ios::in | ios::binary);
    //读文件
    if( !ifs.is_open()){
        cout << "文件打开失败" << endl;
        return;
    }
    //读文件
    Person p;
    ifs.read((char *)&p, sizeof(Person));
    cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
    //关闭文件
}
int main(){
    test01();
}