#include<iostream>
using namespace std;
int main (){
    string choice;
    cout << "Menu : A(dd) D(elete) S(ort) Q(uit), Select one : " ;
    while(1)
    {
    cin >> choice;
        if(choice == "A")
        {
            cout << "����������" << endl;
            continue;
        }
        else if (choice == "D")
        {
            cout << "������ɾ��" << endl;
            continue;
        }
        else if (choice == "S")
        {
            cout << "����������" << endl;
            continue;
        }
        else if (choice == "Q")
        {
            break;
        }
        else 
        {
            cout << "����������" << endl;
        }
    }
}