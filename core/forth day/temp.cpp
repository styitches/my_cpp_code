#include<iostream>
#include<cstring>
using namespace std;
int judge(int x)
{
    for(int i = 2; i <= x - 1; i++)
    {
        if(x % i == 0)
        {
            goto FLAG;
        }
        else
        {
            break;
        }
    }
	return 1;
	FLAG:
	{
	return 0;
	}
}

int main (){
    judge(3);
}