//https://www.acmicpc.net/problem/10093
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //answer 1 : X
    // int a,b,c;
    // cin >> a >> b;
    
    // c = b-a-1;
    // cout << c << '\n';
    // for (int i=a+1; i<b; i++) cout << i << ' ';

    //answer 2 : 30
    // int a,b,c;
    // cin >> a >> b;
    // if (a > b) swap(a, b);
    
    // if (a == b || b-a == 1) cout << 0;
    // else {
    //     c = b-a-1;
    //     cout << c << '\n';
    //     for (int i=a+1; i<b; i++) cout << i << ' ';
    // };

    //answer 3 : 100
    long a,b,c;
    cin >> a >> b;
    if (a > b) swap(a, b);
    
    if (a == b || b-a == 1) cout << 0;
    else {
        c = b-a-1;
        cout << c << '\n';
        for (long i=a+1; i<b; i++) cout << i << ' ';
    };

    return 0;
}