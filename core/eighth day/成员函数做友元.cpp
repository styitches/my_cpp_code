#include<iostream>
using namespace std;
class Building;
class GoodGay{
public:
    GoodGay();
    void visit();   //visit函数可以访问building中私有成员
    void visit2();  //visit2函数不可以访问building中私有成员
    Building *building;
};
class Building{
    //告诉编译器goodgay类下的visit成员函数作为building的好朋友
    // friend void visit();  这样子写代表全局函数 并非成员函数
    friend void GoodGay::visit();         //*****************

public:
    Building();

public:
    string m_SittingRoom;
private:
    string m_BedRoom;
}; 
//类外实现成员函数
Building::Building(){
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}
GoodGay::GoodGay(){
    building = new Building;
}
void GoodGay::visit(){
    cout << "visit正在访问：" << building->m_SittingRoom << endl;
}
void GoodGay::visit2(){

}
void test01(){
    GoodGay gg;
    gg.visit();
}
int main(){
    test01();
}