#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "请输入分数" << endl;
    cin >> x;
    x /= 10;
    switch (x)
    {
    case 10:
    case 9:
        cout << "优" << endl;
        break;
    case 8:
        cout << "良" << endl;
        break;
    case 6:
    case 7:
        cout << "中" << endl;
        break;
    default:
        cout << "差" << endl;
        break;
    }
}