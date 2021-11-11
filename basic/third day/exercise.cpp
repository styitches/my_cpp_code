#include<iostream>
using namespace std;
double Celsius (double);
int main(){
    double x;
    cout << "Please enter a Celsius value :";
    cin >> x;
    double Fahrenheit = Celsius(x);
    cout << x << " degrees Celsius is " << Fahrenheit << " degrees Fahrenheit." << endl;
    return 0;
}
double Celsius (double n){
    return 1.8 * n + 32.0 ;
}