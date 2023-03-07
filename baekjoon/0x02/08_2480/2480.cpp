//https://www.acmicpc.net/problem/2480
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //answer 1
    // const int len = 7;
    // int arr[3];
    // for (int i=0; i<3; i++) cin >> arr[i];
    // int idx_arr[len];
    // fill(idx_arr, idx_arr+len, 0);
    // for (auto a: arr) idx_arr[a]++;
    // int bonus = 0, maxi = 0;
    // for (int i=1; i<len; i++) {
    //     if (idx_arr[i] == 3) bonus = 10000 + i * 1000;
    //     else if (idx_arr[i] == 2) bonus = 1000 + i * 100;
    //     else if (idx_arr[i] == 1) maxi = i;
    // };
    // if (bonus == 0) bonus = maxi * 100;
    // cout << bonus << '\n';

    //answer 2    
    // int a,b,c;
    // cin >> a >> b >> c;

    // if (a==b && b==c) cout << 10000 + a*1000;
    // else if (a==b || a==c) cout << 1000 + a*100;
    // else if (b==c) cout << 1000 + b*100;
    // else cout << max({a,b,c})*100;
    // cout << '\n';

    //answer 3
    int arr[3];
    for (int i=0; i<3; i++) cin >> arr[i];
    sort(arr, arr+3);

    if (arr[0] == arr[2]) cout << 10000 + arr[0]*1000;
    else if (arr[0]==arr[1] || arr[1]==arr[2]) cout << 1000 + arr[1]*100;
    else cout << arr[2]*100;
    cout << '\n';

    return 0;
}