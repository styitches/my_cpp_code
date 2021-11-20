#include<iostream>
using namespace std;
//动物类
class Anmial{
public:
    int m_Age;
};
//利用虚继承可以解决菱形继承的问题
//继承前加上关键字virtual变为虚继承
//anaimal类称为 虚基类
//羊类
class Sheep : virtual public Anmial{
};

//驼类
class Tuo : virtual public Anmial{
};

//羊驼类
class SheepTuo : public Sheep , public Tuo{
};
void test01(){
    SheepTuo st;
    st.Sheep::m_Age = 18;
    st.Tuo::m_Age = 28;   //相当于覆盖了18
    //当菱形继承时候，两个父类拥有相同的数据，需要加作用域区分
    cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
    cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
    cout << "st.m_Age" << st.m_Age << endl;
    //这份数据我们知道 只要又一份就可以了，菱形继承导致数据又两份，资源浪费
}
int main(){
    test01();
}



//vbptr -- vbtable   vbptr是virtual base pointer虚基类指针指向了virtual base table虚基类表
//通过前面的地址偏移量进行寻找地址 寻找m_Age    例如：4+4  0+8