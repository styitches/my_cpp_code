#include<iostream>
using namespace std;
//语法 ： 返回值类型  函数名 (形参 = 默认值) {}
int func (int a, int b = 20, int c = 30)
{
    return a + b + c ;
}
int main(){
    cout << func(10,30) << endl;  //结果是10+30+30
    //如果传入值，用传入值，如果不传入则用默认值
    //注意事项
    //1.如果某个位置有了默认参数，那么从这个位置之后，从左到右都得有默认值
    //2.如果函数声明有了默认参数，那么函数实现不能有默认参数  声明和实现只能有一个有默认参数
    
}