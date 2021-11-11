#include <iostream>
#include <cmath>  //using the squr() function±ÿ–Î”–
using namespace std;
int main (){
    double area;
    cout << "Enter the floor area , in squart feet , of your home " << endl;
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "that's the equivalent of a square" << side
        << "feet to the side" <<endl;
    cout << "how fascinating" <<endl;
    system("pause");
    return 0;
}