#include<iostream>
using namespace std;
//抽象的cpu
class CPU{
public:
    //抽象的计算函数
    virtual void calculate() = 0;
};
//抽象的显卡
class VideoCard{
public:
    //抽象的显示函数
    virtual void display() = 0;
};
//抽象内存条类
class Memory{
public:
    //抽象的存储函数
    virtual void storage() = 0;
};
//电脑类
class Computer{
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem){
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }
    //提供工作函数
    void work(){
        //让三个零件工作起来，调用接口
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }

    //提供析构函数 释放三个电脑零件
    ~Computer(){
        //释放cpu零件
        if(m_cpu != NULL){
            delete m_cpu;
            m_cpu = NULL;
        }
        //释放显卡零件
        if(m_vc != NULL){
            delete m_vc;
            m_vc = NULL;
        }
        //释放内存条零件
        if(m_mem != NULL){
            delete m_mem;
            m_mem = NULL;
        }
    }
private:
    CPU *m_cpu;    //cpu零件指针
    VideoCard *m_vc;  //显卡零件指针
    Memory *m_mem;  //内存条零件指针
};
//具体厂商
//Intel厂商
class IntelCPU : public CPU{
public:
    void calculate(){
        cout << "Intel的CPU开始计算了" << endl;
    }
};
class IntelVideoCare : public VideoCard{
    public :
        void display(){
            cout << "Intel的显卡开始显示了" << endl;
    }
};
class IntelMemory : public Memory{
public:
    void storage(){
        cout << "Intel的内存条开始存储了" << endl;
    }
};

//Lenovo厂商
class LenovoCPU : public CPU{
public:
    void calculate(){
        cout << "Lenovo的CPU开始计算了" << endl;
    }
};
class LenovoVideoCare : public VideoCard{
public:
    void display(){
        cout << "Lenovo的显卡开始显示了" << endl;
    }
};
class LenovoMemory : public Memory{
public:
    void storage(){
        cout << "Lenovo的内存条开始存储了" << endl;
    }
};
void test01(){
    //创建第一台电脑零件
    cout << "第一台电脑开始工作" << endl;
    CPU *intelCPU = new IntelCPU;
    VideoCard *intelCard = new IntelVideoCare;
    Memory *intelMem = new IntelMemory;
    //创建第一台电脑
    Computer *computer = new Computer(intelCPU, intelCard, intelMem);
    computer->work();
    delete computer;    //释放了computer，没有释放三个零件

    cout << "--------------------" << endl;
    //创建第二台电脑且组装
    cout << "第二台电脑开始工作" << endl;
    Computer *computer2 = new Computer(new LenovoCPU, new LenovoVideoCare, new LenovoMemory);
    computer->work();
    delete computer2;

    cout << "--------------------" << endl;
    //创建第三台电脑且组装
    cout << "第二台电脑开始工作" << endl;
    Computer *computer3 = new Computer(new LenovoCPU, new IntelVideoCare, new LenovoMemory);
    computer->work();
    delete computer3;
}
int main(){
    test01();
}