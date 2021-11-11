#include<iostream>
using namespace std;
int main (){
//1、创建方式
    char ch = 'a';
    cout << ch <<endl;
//2、字符型变量所占用的内存大小为1
    cout << sizeof(ch) << endl;
//3、字符型变量常见错误
    char ch2 = 'b';          //创建字符型变量要用单引号  并且单引号内部只能由一个字符  输入中文字符会报错
    cout << ch2 << endl;
//4、字符型变量对应的ASCII编码
    cout << (int)ch << endl;
    string str = "hello";
    cout << str << endl;
    system("pause");
}