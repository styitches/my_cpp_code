#include<iostream>
using namespace std;
int main(){
    char choice;
    cout << "Menu : A(dd) D(elete) S(ort) Q(uit), Select one : ";
    while(1)
    {    
        cin >> choice;
        switch (choice)
        {
        case 'A':
            cout << "数据已增加" << endl;
            continue;
        case 'D':
            cout << "数据已删除" << endl;
            continue;
        case 'S':
            cout << "数据已排序" << endl;
            continue;
        case 'Q':
            break;
        default:
            cout << "请重新输入" << endl;
            continue;
        }
        break;
    }
}