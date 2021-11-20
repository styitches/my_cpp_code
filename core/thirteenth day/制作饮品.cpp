#include<iostream>
using namespace std;
class AbstractSDrinking{
public:
    //煮水
    virtual void Boil() = 0;
    //冲泡
    virtual void Brew() = 0;
    //倾倒
    virtual void PourCup() = 0;
    //加入佐料
    virtual void PutSomething() = 0;
    //制作饮品
    void makeDrink(){
        Boil();
        Brew();
        PourCup();
        PutSomething();
    }
};
//制作咖啡
class Coffee : public AbstractSDrinking{
public:
    //煮水
    virtual void Boil(){      //子类中virtual写不写无所谓
        cout << "煮农夫山泉" << endl;
    };
    //冲泡
    virtual void Brew(){
        cout << "冲泡咖啡" << endl;
    };
    //倾倒
    virtual void PourCup(){
        cout << "倒入杯中" << endl;
    };
    //加入佐料
    virtual void PutSomething(){
        cout << "加入糖和牛奶" << endl;
    };
};
//制作茶叶
class Tea : public AbstractSDrinking{
public:
    //煮水
    virtual void Boil(){
        cout << "煮矿泉水" << endl;
    };
    //冲泡
    virtual void Brew(){
        cout << "冲泡茶叶" << endl;
    };
    //倾倒
    virtual void PourCup(){
        cout << "倒入杯中" << endl;
    };
    //加入佐料
    virtual void PutSomething(){
        cout << "加入柠檬和枸杞" << endl;
    };
};
//制作函数
void doWork(AbstractSDrinking * abs){      //AbstractDrinking *abs = new Coffee
    abs->makeDrink();
    delete abs;    //释放
}
void test01(){
    doWork(new Coffee);
    cout << "-----------" << endl;
    doWork(new Tea);
}
int main(){
    test01();
}