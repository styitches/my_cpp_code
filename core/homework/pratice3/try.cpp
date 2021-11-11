#include<iostream>
using namespace std;
int main() {
	long long n, x;
	string s;
	string t = "0123456789ABCDEF";    //相当于字符数组
	cin >> n; 
	while (n != 0) 
    {
		x = n % 16;
		s = t[x] + s;
		n = n / 16;
	}
    cout << s << endl;
}