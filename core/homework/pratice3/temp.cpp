#include<iostream>
using namespace std;
void change()
{
    int tenth = 0;
    string sixteenth;
    //��¼����
    int reminder[10000];   //����16���Ʋ��ᳬ��10000λ����
    int i = 0;           //��¼��������
    int j = 0;           //���������½Ǳ�

    cout << "������ʮ��������" << endl;
    cin >> tenth;

    if(tenth < 0)
    {
        tenth = abs(tenth);
        sixteenth = sixteenth + "-";
    }
    else if (tenth == 0)
    {
        cout << "ת�����Ϊ0" << endl;
        exit(0);
    }
    while (tenth != 0)
    {
        reminder[i] = tenth % 16;
        tenth /= 16;
        j++;
        if(tenth > 0)
        {
            i++;
        }
    }
    string finally[10000];
    for(int h = i; h >= 0; h--)
    {
        if(reminder[h] >= 10)
        {
            switch (reminder[h])
            {
            case 10:
                finally[h] = "A";
                break;
            case 11:
                finally[h] = "B";
                break;
            case 12:
                finally[h] = "C";
                break;
            case 13:
                finally[h] = "D";
                break;
            case 14:
                finally[h] = "E";
                break;
            case 15:
                finally[h] = "F";
                break;
            }
			
        }
        else if(reminder[h] < 10)
        {
            finally[h] = to_string(reminder[h]);
        }
        sixteenth += finally[h];
    }
    cout << "ת��Ϊʮ�����ƽ��Ϊ��" << sixteenth << endl;
}
int main (){
    change();
    return 0;
}
