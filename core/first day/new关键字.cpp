#include<iostream>
using namespace std;
int * func()
{
    //new返回的是指针
    int * p = new int(10);
    return p;
}
void test01()
{
    int * p = func();
    cout << *p << endl;
    delete p;
    cout << *p << endl;      //释放之后再次访问就是非法内存了
    //堆区的数据由程序员管理开辟 程序员管理释放
    //如果想释放堆区的数据  用关键字delete
}
void test02()
{
    //创建十个整形数据的数组，在堆区
    int *arr = new int[10];    //[10]   代表数组里面有十个变量
    for(int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
}
int main (){
    test01();
    test02();
}