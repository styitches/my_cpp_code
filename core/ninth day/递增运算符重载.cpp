#include<iostream>
using namespace std;
class MyInteger{
    friend ostream &operator<<(ostream &cout, MyInteger myint);

public:
    MyInteger(){
        m_Num = 0;
    }
    //����++
    //ǰ��++
    //������������Ҫ��ͬһ�����ݽ��в��� ����������
    MyInteger& operator++(){
        //�Ƚ���++����
        m_Num++;
        //��������
        return *this;
    }
    //����++
    //int�൱��ռλ���� ��������ǰ�úͺ��õ�ַ
    MyInteger operator++(int){
        //�ȼ�¼���
        MyInteger temp = *this;
        //�����
        m_Num++;
        //��󷵻ؼ�¼���
        return temp;//�ֲ��������ܷ�������
    }

private:
    int m_Num;
};
ostream& operator<<(ostream& cout,MyInteger myint){
    cout << myint.m_Num;
    return cout;
}
void test01(){
    MyInteger myint;
    cout << ++myint << endl;
}
void test02(){
    MyInteger myint;
    cout << myint++ << endl;
    cout << myint << endl;
}
int main(){
    // test01();
    test02();
}