//()��������  �����º���  û�й̶�д��
#include<iostream>
using namespace std;
class MyPrint{
public:
    //���غ������������
    void operator()(string test){
        cout << test << endl;
    }
};
void MyPrint02(string test){
    MyPrint myprint02;
    cout << test << endl;
}
void test01(){
    MyPrint myprint;
    myprint("hello world");   //����ʹ���������ƺ������ã����Խ����º���
    MyPrint02("hello world"); //��������
}
//�º����ǳ���� û�й̶�д��
//�ӷ���
class MyAdd{
public:
    int operator()(int num1, int num2){
        return num1 + num2;
    }
};
void test02(){
    MyAdd myadd;
    int ret = myadd(100, 100);
    cout << "ret = " << ret << endl;

    //������������
    cout << MyAdd()(100, 100) << endl;   //MyAdd()������һ���������� Ȼ����м���
}
int main(){
    test01();
    test02();
    system("pause");
}