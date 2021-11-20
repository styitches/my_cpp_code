#include<iostream>
using namespace std;
class Complex{
public:
    Complex(double a = 0, double b = 0){
        this->a = a;
        this->b = b;
    }
    void add(Complex &p){
        this->a += p.a;
        this->b += p.b;
    }
    void show(){
        if(this->b > 0){
            cout << a << "+" << b << "i" << endl;
        }else if(this->b == 0){
            cout << a << endl;
        }else if(this->b < 0){
            cout << a << b << "i" << endl;
        }
    }
    double a, b;
};
int main(){
    Complex c1(3, 5);
    Complex c2 = 4.5;
    c1.add(c2);
    c1.show();
}