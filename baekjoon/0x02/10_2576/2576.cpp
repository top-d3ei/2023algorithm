//https://www.acmicpc.net/problem/2576
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //answer 1
    // int input, arr[7], cnt=0, sum=0;
    // for (int n=0; n<7; n++) {
    //     cin >> input;
    //     if (input % 2 != 0) arr[cnt++] = input;
    // };

    // sort(arr, arr+cnt);
    
    // if (cnt == 0) cout << -1 << '\n';
    // else {
    //     for (int i=0; i<cnt; i++) sum += arr[i];
    //     cout << sum << '\n' << arr[0] << '\n';
    // };

    //answer 2
    int input, cnt_odd=0, sum=0, min=100;
    for (int i=0; i<7; i++) {
        cin >> input;
        if (input & 1) {
            cnt_odd += 1;
            sum += input;
            if (input < min) min = input;
        };
    };

    if (cnt_odd) cout << sum << '\n' << min << '\n';
    else cout << -1 << '\n';

    return 0;
}