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
            cout << "数据已增加" << endl;
            continue;
        }
        else if (choice == "D")
        {
            cout << "数据已删除" << endl;
            continue;
        }
        else if (choice == "S")
        {
            cout << "数据已排序" << endl;
            continue;
        }
        else if (choice == "Q")
        {
            break;
        }
        else 
        {
            cout << "请重新输入" << endl;
        }
    }
}