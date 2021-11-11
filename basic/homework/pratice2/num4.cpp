#include <iostream>
using namespace std;
int main(){
	int x = 1;
	for (x; x <= 10; x++) 
    {
		for (int y = 1; y <= 10; y++) 
        {
		cout << '<' << x << ',' << y << '>';
	    }
		cout << endl;
	}
}