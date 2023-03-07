//https://www.acmicpc.net/problem/1267
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, y=0,m=0;
    cin >> n;

    int arr[21];
    for (int i=0; i<n; i++) cin >> arr[i];

    for (int i=0; i<n; i++) {
        y += (int(arr[i]/30) +1) *10;
        m += (int(arr[i]/60) +1) *15;
    };

    if (y < m) cout << "Y " << y;
    else if (y > m) cout << "M " << m;
    else cout << "Y M " << y;

    cout << '\n';

    return 0;
}