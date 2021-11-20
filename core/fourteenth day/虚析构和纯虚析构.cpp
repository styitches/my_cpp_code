#include<iostream>
using namespace std;
//��̬ʹ��ʱ���������������Ϥ���ٵ���������ô����ָ�����ͷ�ʱ���޷����õ��������������
//�������ʹ��������Ĺ��ԣ����Խ������ָ���ͷ��������  ����Ҫ�о���ĺ���ʵ��
//��������Ǵ��������������ڳ����࣬�޷�ʵ����
//���������û�ж������ݣ����Բ�д���������ߴ�������
class Animal{
public:
    Animal(){
        cout << "Animal�Ĺ��캯������" << endl;
    }
    /*
    �������������Խ��������ָ���ͷ��������ʱ�򲻸ɾ�������
    virtual ~Animal(){
        cout << "Animal��������������" << endl;
    }
    */
    //��������  ���������Ҳ�п��ٵ����������ݣ���Ҳ��Ҫ���о���ĺ���ʵ��
    //���˴�������֮�� �����Ҳ���ڳ����� �޷�ʵ��������
    virtual ~Animal() = 0; //��������Ҳ���Խ��������
    //���麯��
    virtual void speak() = 0;
};
Animal::~Animal(){
    cout << "Animal�Ĵ�����������" << endl;
}
class Cat : public Animal{
public:
    Cat(string name){
        cout << "Cat�Ĺ��캯������" << endl;
        m_Name = new string(name);
    }
    ~Cat(){
        if(m_Name != NULL){
            cout << "Cat��������������" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }
    void speak(){
        cout << *m_Name << "Сè��˵��" << endl;
    }

    string *m_Name;
};
void test01(){
    Animal *animal = new Cat("Tom ");
    animal->speak();  //û�е���Cat������˵�������ڴ�û���ͷŸɾ��������ڴ�й©
    //����ָ��������ʱ�򣬲����������������������������������ж������ԣ�������ڴ�й©
    delete animal;
}
int main(){
    test01();
}