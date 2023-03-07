#include <iostream>
#include <algorithm>
using namespace std;

int func2(int arr[], int n);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int len = 4;
    int arr1[len] = {1, 52, 48};
    cout << func2(arr1, 3) << endl;;

    int arr2[len] = {50, 42};
    cout << func2(arr1, 2) << endl;

    int arr3[len] = {4, 13, 63, 87};
    cout << func2(arr1, 4) << endl;
    
    return 0;
}

int func2(int arr[], int n) {
    int hundred_arr[101];
    fill(hundred_arr, hundred_arr+101, 0);

    for (int i=0; i<n; i++) {
        if (hundred_arr[100 - arr[i]]) return 1;
        hundred_arr[arr[i]] +=1;
    };

    return 0;
}