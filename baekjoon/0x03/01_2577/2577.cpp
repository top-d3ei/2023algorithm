//https://www.acmicpc.net/problem/2577
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c, sum;
    cin >> a >> b >> c;

    int arr[10];
    fill(arr, arr+10, 0);

    sum = a * b * c;
    do {
        arr[sum%10]++;
    } while (sum /= 10);

    for (int i=0; i<10; i++) cout << arr[i] << '\n';
    
    return 0;
}