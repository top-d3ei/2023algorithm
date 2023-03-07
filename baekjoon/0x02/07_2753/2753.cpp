//https://www.acmicpc.net/problem/2753
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int year;
    cin >> year;

    if (!(year % 4)){
        if (!(year % 400)) cout << 1 << '\n';
        else if (!(year % 100)) cout << 0 << '\n';
        else cout << 1 << '\n';
    }
    else cout << 0 << '\n';

    return 0;
}