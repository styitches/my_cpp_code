#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一个整数" << endl;
	int num;
	cin >> num;
	int x = num;
	int i;
	cout << x << " = ";
	for (i = 2;i <= num;i++)
	{
		while (num != i)
			if (num % i == 0)
			{
				cout << i << " * ";
				num = num / i;
			}
			else break;
	}
	cout << num;
}

