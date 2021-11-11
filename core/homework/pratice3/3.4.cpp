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
    int count = 0, b, a;
    int n = 2000;
    while (n > 0) {
        a = judge(n);
        if (a == 0) {
            count++;
        }
        else if (count > 10) {
            b = n + 1;
            cout << "{";
            while (count > 0) {
                cout << b << " ";
                b = b + 1;
                count--;
            }
            cout << "}" << "\n\n";
        }
        else {
            count = 0;
        }
        n--;
    }
}

int main() {
    write();
}
