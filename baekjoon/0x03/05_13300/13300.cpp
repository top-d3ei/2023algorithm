//https://www.acmicpc.net/problem/13300
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k, room_cnt=0;
    cin >> n >> k;
    int arr[2][7];
    for (int i=0; i<2; i++) fill(arr[i], arr[i]+7, 0);

    for (int i=0; i<n; i++) {
        int s,y;
        cin >> s >> y;
        arr[s][y]++;
    };

    for (int s=0; s<2; s++) {
        for (int y=1; y<7; y++) {
            room_cnt += arr[s][y] / k;
            if (arr[s][y]%k) room_cnt++;
        };
    };

    cout << room_cnt << '\n';

    return 0;
}