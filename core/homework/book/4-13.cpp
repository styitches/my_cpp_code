#include<iostream>
using namespace std;
#define PI 3.1415       //����곣�����ӷֺ�
class Circle{
public:
    double getRadius(){
        cout << "������뾶" << endl;
        cin >> radius;
        return radius;
    }
    void getArea(){
        cout << "Բ������� " << PI * radius * radius << endl;
    }
    double radius;
};
int main(){
    Circle circle;
    circle.getRadius();
    circle.getArea();
}