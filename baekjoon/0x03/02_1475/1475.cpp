//https://www.acmicpc.net/problem/1475
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[10], idx, siznine_cnt=0;
    fill(arr, arr+10, 0);

    do {
        idx = n%10;
        if (idx==6 || idx==9) { if (++siznine_cnt & 1) arr[6]++; }
        else arr[idx]++;
    } while (n/=10);

    cout << *max_element(arr, arr+10) << '\n';
    return 0;
}