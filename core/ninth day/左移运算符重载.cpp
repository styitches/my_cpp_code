#include<iostream>
using namespace std;
//可以输出自定义的数据类型
class Person{
    friend ostream &operator<<(ostream &cout, Person p1);
public:
    Person(int a,int b){
        m_A = a;
        m_B = b;
    }
private:
    //利用成员函重载左移运算符
    // void operator<<(cout){}
    //通常不会利用成员函数重载左移运算符
    //实质是p.operator<<(cout)
    int m_A;
    int m_B;
};
//利用全局函数重载左移运算符
ostream &operator<<(ostream &cout,Person p){   //cout是流对象不能复制只能引用 不能直接写，不能进行拷贝
    cout << "m_A = " << p.m_A << "  m_B = " << p.m_B << endl;
    return cout;
} //本质 operator<<(cout,p) 简化cout << p;
void test01()
{
    Person p(10, 10);
    //本质上是调用p.ostream(cout, p)
    //返回一个cout  相当于cout << p这么多等于cout
    cout << p << endl; 
}
int main(){
    test01();
}//const int * p