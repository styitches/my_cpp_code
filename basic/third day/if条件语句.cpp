#include<iostream>       //选择结构
using namespace std;
int main(){
    //单行
    int scores;
    cout << "please input the scores" << endl;
    cin >> scores;
    if (scores >= 600)
    {
        cout << "恭喜您考上了一本大学" << endl;
    }
    //多行
    int grades;
    cout << "please input the grades" << endl;
    cin >> grades;
    if(grades >= 600)
    {
        cout << "恭喜您考上一本大学" << endl;
    }
    else
    {
        cout << "未考上一本大学" << endl;
    }
    //多条件if语句
    int hhh;
    cout << "请输入hhh" <<endl;
    cin >> hhh;
    cout << "please input the hhh" << endl;
    if (hhh >=600)
    {
        cout << "恭喜你考上了一本大学" << endl;
        if (hhh > 700)
        {
            cout << "您能考上北京大学" << endl;
        }
        else if (hhh > 650)
        {
            cout << "您能考上清华大学" << endl;
        }
        else
        {
            cout << "您能考上人民大学" << endl;
        }
    }
    else if (hhh > 500)
    {
        cout << "恭喜你考上了二本大学";
    }
    else if(hhh > 400)
    {
    cout << "恭喜你考上了三本大学" <<endl;
    }
    else
    {
    cout << "很遗憾你没有考上本科大学,请再接再厉" <<endl;
    }
}