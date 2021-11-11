#include<iostream>
using namespace std;
void time (int);
void time (int hour,int minute){
using namespace std;
cout << "time : " << hour << ":" << minute << endl;
}
int main ()
{
    int x,y;
    cout << "enter the number of hour :" << endl;
    cin >> x;
    cout << "enter the number of minute :" << endl;
    cin >> y;
    time(x,y);
    return 0;
}
