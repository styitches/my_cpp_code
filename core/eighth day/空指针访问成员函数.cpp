#include<iostream>
using namespace std;
class Person {
public:
    void showClassName(){
        cout << "this is Person class" << endl;
    }
    void showPersonAge(){
        //��Ϊ�����ָ��ΪNULL
        if(this == NULL){
            return;
        }
        cout << "m_age = " << m_age << endl; //m_age = this->m_age   thisָ���age�ǿյ�ֵ
    }
    int m_age;
};
void test01(){
    Person *p = NULL;
    p->showClassName();  //right
    p->showPersonAge();
}
int main(){
    test01();
    system("pause");
}