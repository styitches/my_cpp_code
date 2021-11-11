#include<iostream>
using namespace std;
int stonetolb (int);
int main(){
    int stone;
    cout << "enter the weight in stone :" << endl;
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = " ;
    cout << pounds << " pounds " <<endl;
    return 0;
}
int stonetolb (int sts){
    return 14 * sts;
}
