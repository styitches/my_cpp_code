#include<iostream>
using namespace std;
class Base{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son : public Base{
//父类中的所有非静态成员属性都会杯子类继承下去
//父类中私有的成员属性 是被编译器隐藏了，因此访问不到，但是确实被继承了
public:
    int m_D;
};
void test01(){
    cout << "size of Son = " << sizeof(Son) << endl;
}
int main(){
    test01();
}