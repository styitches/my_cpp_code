#include<iostream>
#include<fstream>
using namespace std;
/*
1.����ͷ�ļ�                             #include<fstream>
2.����������                             ifstream ifs;
3.���ļ����ж��ļ��Ƿ�򿪳ɹ�           ifs.open("�ļ�·��",�򿪷�ʽ);
4.������                                 ���ַ�ʽ��ȡ
5.�ر��ļ�                               ifs.close();
*/
void test01(){
    ifstream ifs;
    ifs.open("test.txt", ios::in);
    //�ж��Ƿ���ļ��ɹ�
    if( !ifs.is_open() ){        //����ֵ��true��false   ͨ�������ȡ������
        cout << "�ļ���ʧ��" << endl;
        return;
    }
    //������
    //first
    // char buf[1024] = {0};    //���ַ������ʼ��Ϊ0
    // while ( ifs >> buf ){         //��whileѭ����������ַ�ȫ��¼��buf
    //     cout << buf << endl;
    // }
    //second
    // char buf[1024] = {0};
    // while ( ifs.getline(buf, sizeof(buf))){    //��һ�������ǵ�ַ��ǡ���ַ�����������������׵�ַ
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