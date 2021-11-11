#include<iostream>
using namespace std;
int sum(int n) 
{
    if(n == 1)
    {
        return n;
    }
    else
    {
        return sum(n - 1) + n;
    }
}
int main() {
	int n;
	cout << "n=";
	cin >> n;
	cout << sum(n) << endl;
}