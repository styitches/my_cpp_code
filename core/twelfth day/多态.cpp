#include<iostream>
using namespace std;
//��̬��Ϊ���ࣺ��̬��̬  ��̬��̬
//��̬��̬���������غ���������� ���ú�����
//��̬��̬����������麯��ʵ������ʱ��̬
//��������
//��̬��̬�ĺ�����ַ���  ����׶�ȷ�������ĵ�ַ
//��̬��̬�ĺ�����ַ���  ���н׶�ȷ�������ĵ�ַ



//��̬��̬����������
//1���м̳й�ϵ
//2������Ҫ��д�����е��麯��

//��̬��̬��ʹ��
//�����ָ���������ָ���������

//������
class Animals{
public:
    //�麯��
    virtual void speak(){
        cout << "������˵��" << endl;
    }
};
//è��
class Cat : public Animals{
public:
//��д   ��������ֵ���� ������ �����б� ��ȫ��ͬ ��virtual��д�ɲ�д��
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
//ִ��˵������
//��ַ���   �ڱ���׶ξ�ȷ���˺����ĵ�ַ
//�������è˵�������������ַ������ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
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
int main(){
    test01();
}