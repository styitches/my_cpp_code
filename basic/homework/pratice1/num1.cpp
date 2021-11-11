#define Pai 3.14f
#include <iostream>
using namespace std;
int main (){
    float r, c ;
    cout << "please input the r :";
    cin >> r;
    c = 2 * Pai * r;
    cout << "圆的周长为: " << c << ","<< "圆的半径为： " << r << endl;
}