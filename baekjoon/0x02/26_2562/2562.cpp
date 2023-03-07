//https://www.acmicpc.net/problem/2562
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //answer 1
    // int n, max=0, idx;
    // for (int i=0; i<9; i++) {
    //     cin >> n;
    //     if (max < n) {
    //         max = n;
    //         idx = i+1;
    //     };
    // };

    // cout << max << '\n';
    // cout << idx << '\n';

    //answer 2
    int arr[9];
    for (int i=0; i<9; i++) cin >> arr[i];
    cout << *max_element(arr, arr+9) << '\n';
    cout << max_element(arr, arr+9) -arr +1 << '\n';
    
    // cout << a << '\n';
    // cout << max_element(a, a+9) << '\n';
    // cout << max_element(a, a+9) - a << '\n';
    // cout << max_element(a, a+9) - a +1<< '\n';
    // cout << sizeof(int) << '\n';
    // cout << sizeof(long) << '\n';

    return 0;
}