#include<fstream>
#include<iostream>
using namespace std;
class Person{
public:
    char m_Name[64];
    int m_Age;
};
void test01(){
    //����������
    ifstream ifs;
    //���ļ� �ж��Ƿ�򿪳ɹ�
    ifs.open("person.txt", ios::in | ios::binary);
    //���ļ�
    if( !ifs.is_open()){
        cout << "�ļ���ʧ��" << endl;
        return;
    }
    //���ļ�
    Person p;
    ifs.read((char *)&p, sizeof(Person));
    cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;
    //�ر��ļ�
}
int main(){
    test01();
}