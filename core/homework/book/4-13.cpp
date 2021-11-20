#include<iostream>
using namespace std;
#define PI 3.1415       //定义宏常量不加分号
class Circle{
public:
    double getRadius(){
        cout << "请输入半径" << endl;
        cin >> radius;
        return radius;
    }
    void getArea(){
        cout << "圆的面积是 " << PI * radius * radius << endl;
    }
    double radius;
};
int main(){
    Circle circle;
    circle.getRadius();
    circle.getArea();
}