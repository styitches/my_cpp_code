#include<iostream>
using namespace std;
int main(){ 
    /*标识符命名规则
    1、标识符不可以是关键字   int int = 10
    2、标识符只能是由字母数字下划线组成 int abc = 10   int _abc = 20   int _1234abc = 10
    3、标识符第一个字符只能是下划线或者字母  int 123abc（错误）
    4、标识符区分大小写   int aaa = 100    cout << AAA << endl; (output error)
    tips:给变量起名字最好能做到见名知意*/
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    cout << sum << endl;
    return 0;
}