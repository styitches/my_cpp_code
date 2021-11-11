#include <iostream>
using namespace std;
class Building{
//goodGay 是全局函数 building的好朋友 可以访问私有成员
friend void goodGay(Building &building);     //***********
public:
    Building(){
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
public:
    string m_SittingRoom;  //客厅
private:
    string m_BedRoom;
};
//全局函数
void goodGay(Building &building){
    cout << "好基友的全局函数正在访问：" << building.m_SittingRoom << endl;
    cout << "好基友的全局函数正在访问：" << building.m_BedRoom << endl;
}
void test01(){
    Building building;
    goodGay(building);
}
int main(){
    test01();
}