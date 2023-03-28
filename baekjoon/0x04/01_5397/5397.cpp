// https://www.acmicpc.net/problem/5397
#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt;
    cin >> cnt;

    while (cnt--) {
        list<char> l = {};
        string str;
        cin >> str;
        auto pos = l.end();

        for (auto c: str) {
            if (c == '<') {
                if (pos != l.begin()) pos--;
            } else if (c == '>') {
                if (pos != l.end()) pos++;
            } else if (c == '-') {
                if (pos != l.begin()) pos = l.erase(--pos);
            } else {
                l.insert(pos, c);
                cout << *pos << '\n';
            };
        };

        for (auto c: l) cout << c;
        cout << '\n';
    };

    return 0;
}