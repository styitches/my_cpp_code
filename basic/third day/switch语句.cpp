#include<iostream>
using namespace std;
int main (){
    //switch
    //给电影打分
    //10~9 经典
    //8~7 非常好
    //6~5 一般
    //5以下 烂片
    cout << "please input the scores" << endl;
    int scores = 0;
    cin >> scores;
    cout << "your scores is " << scores << endl;
    switch (scores)
    {
    case 10:
        cout << "您认为是经典电影" << endl;
        break;
    case 9:
        cout << "您认为是经典电影" << endl;
        break;
    case 8:
        cout << "您认为这个电影非常好" << endl;
        break;
    case 7:
        cout << "您认为这个电影非常好" << endl;
        break;
    case 6:
        cout << "您认为这个电影非常好" << endl;
        break;
    default:
        cout << "您认为这是一个烂片" << endl;
        break;
    }
}
//switch缺点:判断时候只能是一个整形或者字符型,不能是区间
//switch优点:结构清晰,执行效率高