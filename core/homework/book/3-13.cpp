#include<iostream>
using namespace std;
int F(int n) {
	int f = 0;
	if (n == 1 || n == 2) 
    {
		f = 1;
	}
	else if (n == 3) 
    {
		f = 2;
	}
	else if (n > 3) 
    {
		f = F(n - 1) + F(n - 2);
	}
	return f;
}
int main() {
	int n = 1;
	cout << "n=";
	cin >> n;
	cout << F(n);
}