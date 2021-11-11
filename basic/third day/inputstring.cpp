#include<iostream>//正常来说如果要输入字符串就必须包含string的头文件
//但是新版的std里面已经包含了string了
using namespace std;
int main (){
    string str;
    cin >> str;
    cout << str << endl;
    bool flag = false;
    cout << "请给bool的flag进行赋值" << endl;
    cin >> flag;
    cout << "bool类型flag = " << flag << endl;
}