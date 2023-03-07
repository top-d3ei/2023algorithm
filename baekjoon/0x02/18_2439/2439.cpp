//https://www.acmicpc.net/problem/2439
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    //answer 1
    // for (int i=0; i<n; i++) {
    //     for (int j=n-i-1; j>0; j--) cout << " ";
    //     for (int j=0; j<i+1; j++) cout << "*";
    //     cout << '\n';
    // };
    
    //answer 2
    for (int i=0; i<n; i++) {
        int j=0;
        for (; j<n-i-1; j++) cout << " ";
        for (; j<n; j++) cout << "*";
        cout << '\n';
    };
    
    return 0;
}