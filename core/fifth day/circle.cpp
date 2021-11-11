#include<iostream>
using namespace std;
class Point{
private:
    int m_Y;
    int m_X;
public:
    void setX(int x){
        m_X = x;
    }
    int getX(){
        return m_X;
    }
    void setY(int y){
        m_Y = y;
    }
    int getY(){
        return m_Y;
    }
};
class Circle{
private:
    int m_R;
    Point m_Center;
public:
    void setR(int r){
        m_R = r;
    }
    int getR(){
        return m_R;
    }
    void setCenter(Point center){
        m_Center = center;
    }
    Point getCenter(){
        return m_Center;
    }
};

void isInCircle(Circle &c, Point &p){
    //计算两点之间距离的平方
    int distance = 
    (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
    (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

    int rDistance = c.getR() * c.getR();

    //判断关系
    if(distance == rDistance){
        cout << "点在圆上" << endl;
    } else if(distance > rDistance){
        cout << "点在圆外" << endl;
    } else if(distance < rDistance){
        cout << "点在园内" << endl;
    }
} 

int main(){
    //创建圆
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);

    Point p;
    p.setY(10);
    p.setX(11);

    isInCircle(c, p);
}