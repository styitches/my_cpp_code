#include<iostream>
using namespace std;
//������
class Anmial{
public:
    int m_Age;
};
//������̳п��Խ�����μ̳е�����
//�̳�ǰ���Ϲؼ���virtual��Ϊ��̳�
//anaimal���Ϊ �����
//����
class Sheep : virtual public Anmial{
};

//����
class Tuo : virtual public Anmial{
};

//������
class SheepTuo : public Sheep , public Tuo{
};
void test01(){
    SheepTuo st;
    st.Sheep::m_Age = 18;
    st.Tuo::m_Age = 28;   //�൱�ڸ�����18
    //�����μ̳�ʱ����������ӵ����ͬ�����ݣ���Ҫ������������
    cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
    cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
    cout << "st.m_Age" << st.m_Age << endl;
    //�����������֪�� ֻҪ��һ�ݾͿ����ˣ����μ̳е������������ݣ���Դ�˷�
}
int main(){
    test01();
}



//vbptr -- vbtable   vbptr��virtual base pointer�����ָ��ָ����virtual base table������
//ͨ��ǰ��ĵ�ַƫ��������Ѱ�ҵ�ַ Ѱ��m_Age    ���磺4+4  0+8