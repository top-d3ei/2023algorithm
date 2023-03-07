//https://www.acmicpc.net/problem/2752
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //answer 1
    // int a,b,c, na, nb, nc;
    // cin >> a >> b >> c;
    // na = min({a,b,c});
    // nc = max({a,b,c});
    // nb = a+b+c -na-nc;
    // cout << na << ' ' << nb << ' ' << nc << '\n';

    //answer 2
    int arr[3];
    for (int i=0; i<3; i++) cin >> arr[i];
    sort(arr, arr+3);
    for (auto n: arr) cout << n << ' ';
    cout << '\n';

    return 0;
}