//https://www.acmicpc.net/problem/2445
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<i+1; j++) cout << "*";
        for (int k=0; k<2*(n-i)-2; k++) cout << " ";
        for (int j=0; j<i+1; j++) cout << "*";
        cout << '\n';
    };

    for (int i=n-2; i>=0; i--) {
        for (int j=0; j<i+1; j++) cout << "*";
        for (int k=0; k<2*(n-i)-2; k++) cout << " ";
        for (int j=0; j<i+1; j++) cout << "*";
        cout << '\n';
    };
    
    return 0;
}