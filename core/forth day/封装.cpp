#include<iostream>
using namespace std;
#define PI 3.14
//c++面向对象三大特征：封装 继承 多态
//c++认为万事万物皆为对象，对象有属性和行为
//有相同性质的对象可以抽象为类
/*封装：将属性和行为作为整体，表现事物
        将属性和行为加以权限控制*/
//例子：设计一个圆类，求圆的周长
//公式 2*pi*半径
//class 代表设计一个类，类后面紧跟着类名称
class Circle
{
    //访问权限
public:   //公共权限
    //属性
    int m_r;
    //行为
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};
int main(){
    //通过圆类：创建具体的圆（对象）
    //实例化 通过一个类创建一个对象
    Circle c1;
    //给圆对象 的属性赋值
    c1.m_r = 10;
    cout << "圆的周长为：" << c1.calculateZC() << endl;
}