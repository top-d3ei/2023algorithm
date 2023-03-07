//https://www.acmicpc.net/problem/3273
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //answer 1
    // int n, arr[101], v, cnt=0;
    // cin >> n;
    // for (int i=0; i<n; i++) cin >> arr[i];
    // cin >> v;

    // for (int i=0; i<n; i++) if (arr[i] == v) cnt++;
    // cout << cnt << '\n';

    //answer 2
    int n, arr[201], v, cnt=0;
    fill(arr, arr+201, 0);
    
    cin >> n;
    while (n--) {
        int input;
        cin >> input;
        arr[input +100]++;
    };
    cin >> v;
    cout << arr[v +100] << '\n';
    
    return 0;
}