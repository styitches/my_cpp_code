#include<iostream>
using namespace std;
class Rectangle{
public:
    void getPoint1(){
        cout << "请输入左上角的点位" << endl;
        cin >> x1 >> y1;
    }
    void getPoint2(){
        cout << "请输入右下角的点位" << endl;
        cin >> x2 >> y2;
    }
    int Area(){
        return abs((x1 - x2) * (y1 - y2));
    }
    int x1, y1, x2, y2;
};
int main(){
    Rectangle area;
    area.getPoint1();
    area.getPoint2();
    cout << "矩形的面积是 " << area.Area() << endl;
}