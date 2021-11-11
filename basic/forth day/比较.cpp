#include<iostream>
using namespace std;
int main(){
    int arr[] = {250, 300, 220, 440, 500};
    int max = 0;
    for (int i = 1; i <= 4; i++)
    {
        max = max > arr[i] ? max : arr[i];
    }
    cout << max << endl;
}