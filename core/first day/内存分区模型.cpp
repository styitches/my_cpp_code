/*内存分为四个区域
1.代码区 ： 存放函数体的二进制代码，由操作系统管理
2.全局区 ： 存放全局变量 静态变量 常量
3，栈区 ： 由编译器自动分配释放，存放函数的参数值 局部变量
4.堆区 ： 由程序员分配释放，若程序员不释放，程序结束时由操作系统回收*/
/* 不同区域存放的数据，赋予不同的声明周期，给我们更大的灵活编程*/ 
/* 代码区 ： 存放cpu执行的机器指令
            代码区是共享的，共享的目的是对于频繁执行的程序，只需要在内存中存有一份代码即可
            代码区是只读的，使其只读的原因是防止程序意外地修改了它的指令*/ 
/* 全局区 ： 包含常量区 字符串常量 和其他常量*/      //代码区和全局区在运行前就有了
#include<iostream>
using namespace std;
//全局变量
int g_a = 10;
int g_b = 10;
//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main (){
    //局部变量
    int a = 10;
    int b = 10;

    cout << "局部变量a的地址" << &a << endl;
    cout << "局部变量b的地址" << &b << endl;
    cout << "局部变量g_a的地址" << &g_a << endl;
    cout << "局部变量g_b的地址" << &g_b << endl;

    //静态变量  在普通变量前面加static，属于静态变量
    static int s_a = 10;
    cout << "静态变量s_a的地址" << &s_a << endl;

    //常量
    //字符串常量
    cout << "字符串常量的地址为" << &"Hello World" << endl;
    //const修饰变量
    //const修饰的全局变量，const修饰的局部变量
    cout << "全局常量c_g_a的地址为" << &c_g_a << endl;
    cout << "全局常量c_g_b的地址为" << &c_g_b << endl;

    const int c_l_a = 10;    //c-const  g-global   l-local
    const int c_l_b = 10;
    cout << "局部变量c_l_a的地址为" << &c_l_a << endl;
    cout << "局部变量c_l_b的地址为" << &c_l_b << endl;
}
