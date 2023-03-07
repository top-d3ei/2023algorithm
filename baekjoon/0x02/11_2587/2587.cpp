//https://www.acmicpc.net/problem/2587
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[5], sum=0;;
    for (int i=0; i<5; i++) {
        cin >> arr[i];
        sum += arr[i];
    };
    sum /= 5;

    sort(arr, arr+5);
    cout << sum << '\n' << arr[2];

    return 0;
}