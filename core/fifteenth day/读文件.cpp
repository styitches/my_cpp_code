#include<iostream>
#include<fstream>
using namespace std;
/*
1.包含头文件                             #include<fstream>
2.创建流对象                             ifstream ifs;
3.打开文件并判断文件是否打开成功           ifs.open("文件路径",打开方式);
4.读数据                                 四种方式读取
5.关闭文件                               ifs.close();
*/
void test01(){
    ifstream ifs;
    ifs.open("test.txt", ios::in);
    //判断是否打开文件成功
    if( !ifs.is_open() ){        //返回值是true和false   通常会进行取反操作
        cout << "文件打开失败" << endl;
        return;
    }
    //读数据
    //first
    // char buf[1024] = {0};    //把字符数组初始化为0
    // while ( ifs >> buf ){         //用while循环把里面的字符全部录入buf
    //     cout << buf << endl;
    // }
    //second
    // char buf[1024] = {0};
    // while ( ifs.getline(buf, sizeof(buf))){    //第一个参数是地址，恰好字符数组的数组名就是首地址
    //     cout << buf << endl;
    // }
    //third
    // string buf;
    // while (getline(ifs, buf)){
    //     cout << buf << endl;
    // }
    //forth
    // char c;        
    // while ( (c = ifs.get()) != EOF){         //EOF  end of file
    //     cout << c;
    // }
    ifs.close();
}
int main(){
    test01();
}