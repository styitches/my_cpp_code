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
            cout << "����������" << endl;
            continue;
        case 'D':
            cout << "������ɾ��" << endl;
            continue;
        case 'S':
            cout << "����������" << endl;
            continue;
        case 'Q':
            break;
        default:
            cout << "����������" << endl;
            continue;
        }
        break;
    }
}