#include<iostream>
using namespace std;
class first{
public:
    void func(){
        cout << "hhhh" << endl;
    }
};
class second : public first{
public:
    void func(){
        cout << "hhhhhhhh" << endl;
    }
};
class third : public second{
public:
    void func(){
        cout << "hhhhhhhhhhhhhhhhh" << endl;
    }
};
void test(){
    third th;
    th.first::func();
}
int main(){
    test();
}