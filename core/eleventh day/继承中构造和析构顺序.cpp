#include<iostream>
using namespace std;
//����̳и���֮�󣬵������������Ҳ����ø����еĹ��캯��
class Base{
public:
    Base(){
        cout << "Base�Ĺ��캯��" << endl;
    }
    ~Base(){
        cout << "Base����������" << endl;
    }
};
class Son : public Base{
public:
    Son(){
        cout << "Son�Ĺ��캯��" << endl;
    }
    ~Son(){
        cout << "Son����������" << endl;
    }
};
void test01(){
    // Base b;
    Son s;      //�Ƚ����
    //�ȹ��츸�࣬�ٹ�������
}
int main(){
    test01();
}