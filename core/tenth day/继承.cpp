#include<iostream>
using namespace std;
//��ͨʵ��ҳ��
// Java 
// class Java{
// public:
//     void header(){
//         cout << "��ҳ�������Ρ���¼��ע�ᡭ��������ͷ����" << endl;
//     }
//     void footer(){
//         cout << "�������ġ�����������վ�ڵ�ͼ�����������ײ���" << endl;
//     }
//     void left(){
//         cout << "Java��Python��c++���������������б�" << endl;
//     }
//     void content(){
//         cout << "Javaѧ����Ƶ" << endl;
//     }
// };
//Python
// class Python{
// public:
//     void header(){
//         cout << "��ҳ�������Ρ���¼��ע�ᡭ��������ͷ����" << endl;
//     }
//     void footer(){
//         cout << "�������ġ�����������վ�ڵ�ͼ�����������ײ���" << endl;
//     }
//     void left(){
//         cout << "Java��Python��c++���������������б�" << endl;
//     }
//     void content(){
//         cout << "Pythonѧ����Ƶ" << endl;
//     }
// };
//C++
// class Cpp{
// public:
//     void header(){
//         cout << "��ҳ�������Ρ���¼��ע�ᡭ��������ͷ����" << endl;
//     }
//     void footer(){
//         cout << "�������ġ�����������վ�ڵ�ͼ�����������ײ���" << endl;
//     }
//     void left(){
//         cout << "Java��Python��c++���������������б�" << endl;
//     }
//     void content(){
//         cout << "C++ѧ����Ƶ" << endl;
//     }
// };
//�̳�ʵ��ҳ��
//����ҳ��
class BasePage{
public:
    void header(){
        cout << "��ҳ�������Ρ���¼��ע�ᡭ��������ͷ����" << endl;
    }
    void footer(){
        cout << "�������ġ�����������վ�ڵ�ͼ�����������ײ���" << endl;
    }
    void left(){
        cout << "Java��Python��c++���������������б�" << endl;
    }
};
//�̳еĺô��������ظ��Ĵ���
//�﷨��class ���� : �̳з�ʽ ����{}
//����Ҳ��Ϊ������
//����Ҳ��Ϊ����

//Javaҳ��
class Java : public BasePage{
public:
    void content(){
        cout << "Javaѧ����Ƶ" << endl;
    }
};
//pythonҳ��
class Python : public BasePage{
public:
    void content(){
        cout << "Pythonѧ����Ƶ" << endl;
    }
};
//cppҳ��
class Cpp : public BasePage{
public:
    void content(){
        cout << "C++ѧ����Ƶ" << endl;
    }
};
void test01(){
    cout << "Java������Ƶ��ҳ�����£�" << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout << "--------------------------" << endl;
    cout << "Python������Ƶ��ҳ�����£�" << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
    cout << "--------------------------" << endl;
    cout << "C++������Ƶ��ҳ�����£�" << endl;
    Cpp cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();
}

int main(){
    test01();
}