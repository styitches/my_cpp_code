#include<iostream>
#include<fstream>
using namespace std;
//������д���Ǿ���Ҫ�������ļ����ó�Ա����write
//ostream write(const cha *buffer, int len)
//�ַ�ָ��bufferָ���ڴ���һ���ڴ�ռ�  len�Ƕ�д���ֽ���
class Person{
public:
    char m_Name[64];       //�������ַ��������string �������׳�����
    int m_Age;
};
void test01(){
    //����������
    ofstream ofs("person.txt", ios::out | ios::binary); //�й��캯��
    //���ļ�
    // ofs.open("peron.txt", ios::out | ios::binary);
    //д�ļ�
    Person p = {"����", 18};
    ofs.write((const char *)&p, sizeof(Person));
    //�ر��ļ�
    ofs.close();
}
int main(){
    test01();
}