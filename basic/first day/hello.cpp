#include<iostream>
using namespace std;
int judge(int x)
{
    int a = 2;
    while (a < x)
    {
        if (x % a == 0) {
            break;
        }
        a++;
    }
    if (a == x) {
        return 1;
    }
    else {
        return 0;
    }
}
void write() {
    int x;
    cin >> x;
    judge(x);
    int i = 0, b, a;
    int n = 2000;
    while (n > 0) {
        a = judge(n);
        if (a == 0) {
            i++;
        }
        else if (i > 10) {
            b = n + 1;
            cout << "{";
            while (i > 0) {
                cout << b << " ";
                b = b + 1;
                i--;
            }
            cout << "}" << "\n\n";
        }
        else {
            i = 0;
        }
        n--;
    }
}

int main() {
    write();
}