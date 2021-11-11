/*整形的类型
1、short 两字节   +-2^15
2、int 四个字节   +-2^31
3、long 四个字节  同上
4、long long 八个字节  +-2^63*/
/*sizeof关键字   求出数据类型占用的内存大写
语法： sizeof（数据类型/变量）*/
#include <iostream>
using namespace std;
int main (){
    short num1 = 10;
    cout << "short占用的内存空间为" << sizeof(num1) << endl;
    int num2 = 10;
    cout << "int占用的内存空间为" << sizeof(num2) << endl;
    long num3 = 10;
    cout << "long占用的内存空间为" << sizeof(num3) << endl;
    long long num4 = 10;
    cout << "long long占用的内存空间为" << sizeof(num4) << endl;
    //short < int <= long <= long long
}
