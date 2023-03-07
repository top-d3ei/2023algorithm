//https://www.acmicpc.net/problem/3273
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int len, arr[100001], x, cnt=0;
    bool exists[2000001];

    cin >> len;
    for (int i=0; i<len; i++) cin >> arr[i];
    cin >> x;

    for (int i=0; i<len; i++) {
        if (x-arr[i]>0 && exists[x-arr[i]]) cnt++;
        exists[arr[i]] = true;
    };

    cout << cnt << '\n';
    return 0;
}