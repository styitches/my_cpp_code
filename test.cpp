// 这是一个调试测试文件，您可以直接运行检测配置是否生效
// 若配置任然无法调试，请查阅README_inProject.md

#include<iostream>
using namespace std;
static int ch = 100;
class a{
public:
    void hh(){
        cout << a <<ch << endl;
    }

private:
    int a = 10;
};

void test(){
    a a;
    a.hh();
}
int main(){
    test();
}