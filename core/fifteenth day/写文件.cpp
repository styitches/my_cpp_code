#include<iostream>
#include<fstream>    //���ļ����в����������ͷ�ļ�
using namespace std;
//�����ļ���������  
//д������ ofstream
//�������� ifstream
//��д������ fstream

/*���裺
1.����ͷ�ļ�   #include <fstream>
2.�������ļ�   ofstream ofs;
3.���ļ�     ofs.open("�ļ�·��",�򿪷�ʽ)
4.д����       ofs << "д�������"
5.�ر��ļ�     ofs.close();
*/

/*
�򿪷�ʽ��
ios::in      Ϊ���ļ������ļ�
ios::out     Ϊд�ļ������ļ�
ios::ate     ��ʼλ�ã��ļ�β
ios::app     ׷�ӷ�ʽд�ļ�
ios::trunc   ����ļ�������ɾ�����ٴ���
ios::binary  �����Ʒ�ʽ
*/
//�ļ��򿪷�ʽ�������ʹ�ã����� | ������
void test01(){
    //�������ļ�
    ofstream ofs;
    //ָ���򿪷�ʽ
    ofs.open("test.txt", ios::out);
    //д����
    ofs << "����������" << endl;
    ofs << "�Ա���" << endl;
    ofs << "���䣺18" << endl;
    //�ر��ļ�
    ofs.close();
}
int main(){
    test01();
}