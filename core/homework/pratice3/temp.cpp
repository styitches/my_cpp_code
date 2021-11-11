#include<iostream>
using namespace std;
void change()
{
    int tenth = 0;
    string sixteenth;
    //记录余数
    int reminder[10000];   //假设16进制不会超过10000位数字
    int i = 0;           //记录余数个数
    int j = 0;           //余数数组下角标

    cout << "请输入十进制数字" << endl;
    cin >> tenth;

    if(tenth < 0)
    {
        tenth = abs(tenth);
        sixteenth = sixteenth + "-";
    }
    else if (tenth == 0)
    {
        cout << "转换结果为0" << endl;
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
    cout << "转换为十六进制结果为：" << sixteenth << endl;
}
int main (){
    change();
    return 0;
}
