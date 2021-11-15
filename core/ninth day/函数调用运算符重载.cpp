//()进行重载  叫做仿函数  没有固定写法
#include<iostream>
using namespace std;
class MyPrint{
public:
    //重载函数调用运算符
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
    myprint("hello world");   //由于使用起来类似函数调用，所以叫做仿函数
    MyPrint02("hello world"); //函数调用
}
//仿函数非常灵活 没有固定写法
//加法类
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

    //匿名函数对象
    cout << MyAdd()(100, 100) << endl;   //MyAdd()创建了一个匿名对象 然后进行计算
}
int main(){
    test01();
    test02();
    system("pause");
}