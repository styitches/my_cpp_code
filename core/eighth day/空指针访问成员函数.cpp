#include<iostream>
using namespace std;
class Person {
public:
    void showClassName(){
        cout << "this is Person class" << endl;
    }
    void showPersonAge(){
        //因为传入的指针为NULL
        if(this == NULL){
            return;
        }
        cout << "m_age = " << m_age << endl; //m_age = this->m_age   this指向的age是空的值
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