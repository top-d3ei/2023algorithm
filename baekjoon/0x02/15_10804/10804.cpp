//https://www.acmicpc.net/problem/10804
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //0931~1010
    //answer 1
    // int meta[21];
    // for (int i=1; i<21; i++) meta[i] = i;

    // int arr[21], min, max, n, tmp;
    // for (int i=0; i<20; i+=2) cin >> arr[i] >> arr[i+1];

    // for (int i=0; i<20; i+=2) {
    //     min = arr[i];
    //     max = arr[i+1];
    //     n = (max -min +1)/2;
    //     for (int j=min, k=max-min; j<min+n; j++, k-=2) {
    //         //cout << ": "<< j << ' ' << k << ", ";
    //         swap(meta[j], meta[j+k]);
    //     };
    // };

    // for (int z=1; z<21; z++) cout << meta[z] << ' ';
    // cout << '\n';

    //answer 2
    // int meta[21];
    // for (int i=1; i<21; i++) meta[i] = i;

    // int min, max;
    // for (int i=0; i<10; i++) {
    //     cin >> min >> max;
    //     int n = (max -min +1)/2;
    //     for (int j=0; j<n; j++) swap(meta[min+j], meta[max-j]);
    // };

    // for (int z=1; z<21; z++) cout << meta[z] << ' ';
    // cout << '\n';

    //answer 3-STL
    int meta[21];
    for (int i=1; i<21; i++) meta[i] = i;

    int min, max;
    for (int i=0; i<10; i++) {
        cin >> min >> max;
        reverse(meta+min, meta+max+1);
    };

    for (int z=1; z<21; z++) cout << meta[z] << ' ';
    cout << '\n';

    return 0;
}