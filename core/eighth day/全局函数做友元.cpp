#include <iostream>
using namespace std;
class Building{
//goodGay ��ȫ�ֺ��� building�ĺ����� ���Է���˽�г�Ա
friend void goodGay(Building &building);     //***********
public:
    Building(){
        m_SittingRoom = "����";
        m_BedRoom = "����";
    }
public:
    string m_SittingRoom;  //����
private:
    string m_BedRoom;
};
//ȫ�ֺ���
void goodGay(Building &building){
    cout << "�û��ѵ�ȫ�ֺ������ڷ��ʣ�" << building.m_SittingRoom << endl;
    cout << "�û��ѵ�ȫ�ֺ������ڷ��ʣ�" << building.m_BedRoom << endl;
}
void test01(){
    Building building;
    goodGay(building);
}
int main(){
    test01();
}