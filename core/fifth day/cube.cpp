#include<iostream>
using namespace std;
class Cube{
    //行为
    //获取立方体面积和体积
    //设置获取长宽高
    //利用全局函数和成员函数判断两个立方体是否相等
    public:
    void setL(int l){
        m_L = l;
    }
    int getL(){
        return m_L;
    }
    void setW(int w){
        m_W = w;
    }
    int getW(){
        return m_W;
    }
    void setH(int h){
        m_H = h;
    }
    int getH(){
        return m_H;
    }

    int calculateS(){
        return 2 * m_L * m_W + 2 * m_H * m_W + 2 * m_H * m_L;
    }
    int calculateV(){
        return m_L * m_W * m_H;
    }

    bool isSameByClass(Cube &c){
        if(c.getL() == m_L && c.getH() == m_H && c.getW() == m_W){
            return true;
        } else {
            return false;
        }
    }
    //属性  最好设置为私有
    private:
    int m_L;
    int m_W;
    int m_H;
};
bool isSame(Cube &c1 ,Cube &c2){
    if(c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW()){
        return true;
    } else {
        return false;
    }
}
int main(){
    Cube c1;
    c1.setH(10);
    c1.setL(10);
    c1.setW(10);
    cout << "c1的面积为" << c1.calculateS() << endl;
    cout << "c1的体积为" << c1.calculateV() << endl;

    Cube c2;
    c2.setH(10);
    c2.setL(10);
    c2.setW(10);
//利用全局函数判断
    bool ret = isSame(c1, c2);
    if (ret){
        cout << "c1 和 c2是相等的" << endl;
    } else {
        cout << "c1 和 c2不相等" << endl;
    }
//利用成员函数判断
    ret = c1.isSameByClass(c2);
    if (ret){
        cout << "c1 和 c2是相等的" << endl;
    } else {
        cout << "c1 和 c2不相等" << endl;
    }
}