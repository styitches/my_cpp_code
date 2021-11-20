#include<iostream>
#include<fstream>    //对文件进行操作必须包含头文件
using namespace std;
//操作文件的三大类  
//写操作： ofstream
//读操作： ifstream
//读写操作： fstream

/*步骤：
1.包含头文件   #include <fstream>
2.创建流文件   ofstream ofs;
3.打开文件     ofs.open("文件路径",打开方式)
4.写数据       ofs << "写入的数据"
5.关闭文件     ofs.close();
*/

/*
打开方式：
ios::in      为读文件而打开文件
ios::out     为写文件而打开文件
ios::ate     初始位置：文件尾
ios::app     追加方式写文件
ios::trunc   如果文件存在先删除，再创建
ios::binary  二进制方式
*/
//文件打开方式可以配合使用，利用 | 操作符
void test01(){
    //创建流文件
    ofstream ofs;
    //指定打开方式
    ofs.open("test.txt", ios::out);
    //写内容
    ofs << "姓名：张三" << endl;
    ofs << "性别：男" << endl;
    ofs << "年龄：18" << endl;
    //关闭文件
    ofs.close();
}
int main(){
    test01();
}