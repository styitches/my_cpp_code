#include<iostream>
using namespace std;
//Animals���ڲ��ṹ
//����ָ��vfptr--�麯������ָ��  virtual function pointer
//ָ��һ���麯����vftable  ���ڲ���¼�麯����ַ
//--------------------------------------------------------------
//|          &Animals::speak (�麯������ڵ�ַ)                  |
//--------------------------------------------------------------
/*
���û����д
Cat���ڲ��ṹ
����ָ��vfptr--�麯������ָ��  virtual function pointer
ָ��һ���麯����vftable  ���ڲ���¼�麯����ַ
--------------------------------------------------------------
|          &Animals::speak (�麯������ڵ�ַ)                  |
--------------------------------------------------------------
*/
/*
���������д�ĸ�����麯��   �����е��麯�����ڲ����滻��������麯����ַ
����ָ��vfptr--�麯������ָ��  virtual function pointer
ָ��һ���麯����vftable  ���ڲ���¼�麯����ַ
----------------------------------------------------------
|          &Cat::speak (�麯������ڵ�ַ)                  |
----------------------------------------------------------
*/
//�������ָ���������ָ���������ʱ�������˶�̬
//������
class Animals{
public:
    //�麯��
    virtual void speak(){   //�Ǿ�̬��Ա�������洢������
        cout << "������˵��" << endl;
    }

};
//è��
class Cat : public Animals{
public:
    void speak(){
        cout << "Сè��˵��" << endl;
    }
};
//����
class Dog : public Animals{
public:
    void speak(){
        cout << "С����˵��" << endl;
    }
};
void doSpeak(Animals &animal){   //Animal &animal = cat
//������������ֱ��ʹ�ò���ת��
    animal.speak();
}
void test01(){
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}
void test02(){
    cout << "size of Animal = " << sizeof(Animals) << endl;
}
int main(){
    test02();
}