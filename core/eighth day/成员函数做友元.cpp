#include<iostream>
using namespace std;
class Building;
class GoodGay{
public:
    GoodGay();
    void visit();   //visit�������Է���building��˽�г�Ա
    void visit2();  //visit2���������Է���building��˽�г�Ա
    Building *building;
};
class Building{
    //���߱�����goodgay���µ�visit��Ա������Ϊbuilding�ĺ�����
    // friend void visit();  ������д����ȫ�ֺ��� ���ǳ�Ա����
    friend void GoodGay::visit();         //*****************

public:
    Building();

public:
    string m_SittingRoom;
private:
    string m_BedRoom;
}; 
//����ʵ�ֳ�Ա����
Building::Building(){
    m_SittingRoom = "����";
    m_BedRoom = "����";
}
GoodGay::GoodGay(){
    building = new Building;
}
void GoodGay::visit(){
    cout << "visit���ڷ��ʣ�" << building->m_SittingRoom << endl;
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