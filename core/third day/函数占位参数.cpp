#include<iostream>
using namespace std;
//占位参数
//返回值类型  函数名（数据类型）{}
void func(int a, int)    //后面的int就是一个占位参数输入实参时候必须输入   但是占位参数用不到
//占位参数还可以有默认值  int = 10    如果有默认值就不需要再main中传入数值
{
    cout << "this is func" << endl;
}
int main(){
    func(10,10);

}