#include<iostream>
using namespace std;
int main(){
    cout << "1.xxx" << endl;
    cout << "2.xxx" << endl;
    cout << "3.xxx" << endl;
    goto FLAG;
    cout << "4.xxx" << endl;
    cout << "5.xxx" << endl;
    FLAG:   //后面加冒号：代表确认了这是个标记
    cout << "6.xxx" << endl;
    cout << "7.xxx" << endl;
}