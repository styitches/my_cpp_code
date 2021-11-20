#include<iostream>
using namespace std;
class AbstractSDrinking{
public:
    //��ˮ
    virtual void Boil() = 0;
    //����
    virtual void Brew() = 0;
    //�㵹
    virtual void PourCup() = 0;
    //��������
    virtual void PutSomething() = 0;
    //������Ʒ
    void makeDrink(){
        Boil();
        Brew();
        PourCup();
        PutSomething();
    }
};
//��������
class Coffee : public AbstractSDrinking{
public:
    //��ˮ
    virtual void Boil(){      //������virtualд��д����ν
        cout << "��ũ��ɽȪ" << endl;
    };
    //����
    virtual void Brew(){
        cout << "���ݿ���" << endl;
    };
    //�㵹
    virtual void PourCup(){
        cout << "���뱭��" << endl;
    };
    //��������
    virtual void PutSomething(){
        cout << "�����Ǻ�ţ��" << endl;
    };
};
//������Ҷ
class Tea : public AbstractSDrinking{
public:
    //��ˮ
    virtual void Boil(){
        cout << "���Ȫˮ" << endl;
    };
    //����
    virtual void Brew(){
        cout << "���ݲ�Ҷ" << endl;
    };
    //�㵹
    virtual void PourCup(){
        cout << "���뱭��" << endl;
    };
    //��������
    virtual void PutSomething(){
        cout << "�������ʺ����" << endl;
    };
};
//��������
void doWork(AbstractSDrinking * abs){      //AbstractDrinking *abs = new Coffee
    abs->makeDrink();
    delete abs;    //�ͷ�
}
void test01(){
    doWork(new Coffee);
    cout << "-----------" << endl;
    doWork(new Tea);
}
int main(){
    test01();
}