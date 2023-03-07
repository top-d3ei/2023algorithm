//https://www.acmicpc.net/problem/2309
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[9];
    int arr2[200];
    int target, height=0, dwarf1, dwarf2;
    fill(arr2, arr2+200, 0);

    for (int i=0; i<9; i++) {
        cin >> arr[i];
        height += arr[i];
    };

    height -= 100;

    for (int i=0; i<9; i++) {
        int exists_index = height-arr[i];
        if (exists_index >= 0) {
            if (arr2[exists_index]) {
                dwarf1 = arr[i];
                dwarf2 = exists_index;
                break;
            };
            arr2[arr[i]]++;
        };
    };

    for (int i=0; i<9; i++) {
        if (arr[i] == dwarf1 || arr[i] == dwarf2) arr[i] = 0;
    };
    
    sort(arr, arr+9);
    for (int i=2; i<9; i++) cout << arr[i] << '\n';

    return 0;
}