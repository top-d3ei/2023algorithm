// https://www.acmicpc.net/problem/1406
#include <iostream>
#include <algorithm>
#include <string>
#include <list>

#include <typeinfo>

using namespace std;

const int MX = 100002;
char dat[MX];
int pre[MX], nxt[MX];
int unused=1, len=0;

void insert(int addr, char s) {
    dat[unused] = s;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];

    if (nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;

    unused++;
    len++;
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traverse() {
    int cur = nxt[0];
    while (cur != -1) {
        cout << dat[cur];
        cur = nxt[cur];
    };
    cout << '\n';

    // for (int i=0; i<unused; i++) cout << "|dat|" << i << "|" << dat[i] << " ";
    // cout << '\n';

    // for (int i=0; i<unused; i++) cout << "|dat|" << i << "|" << nxt[i] << " ";
    // cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // string str, cmd;
    // int m;
    // cin >> str >> m;

    // answer 2_array_linked_list
    // fill(pre, pre+MX, -1);
    // fill(nxt, nxt+MX, -1);

    // for (int i=0; i<str.length(); i++) insert(i, str[i]);

    // int pos = len;
    // for (int i=0; i<m; i++) {
    //     cin >> cmd;
    //     if (!cmd.compare("L")) {
    //         if (pre[pos] != -1) pos = pre[pos];
    //     } else if (!cmd.compare("D")) {
    //         if (nxt[pos] != -1) pos = nxt[pos];
    //     } else if (!cmd.compare("B")) {
    //         if (pre[pos] != -1) {
    //             erase(pos);
    //             pos = pre[pos];
    //             len--;
    //         };
    //     } else if (!cmd.compare("P")) {
    //         char s;
    //         cin >> s;
    //         insert(pos, s);
    //         pos = nxt[pos];
    //     };
    //     // cout << "__len" << len << "__pos " << pos << '\n';
    //     // cout << "__"; traverse(); cout << '\n';
    // };
    // traverse();

    // answer 1_STL
    // list<char> l;
    // for (auto a: str) l.push_back(a);
    // auto pos = l.end();

    // for (int i=0; i<m; i++) {
    //     cin >> cmd;
    //     if (!cmd.compare("L")) {
    //         if (l.begin() != pos) pos--;
    //     } else if (!cmd.compare("D")) {
    //         if (l.end() != pos) pos++;
    //     } else if (!cmd.compare("B")) {
    //         if (l.begin() != pos) pos = l.erase(--pos);
    //     } else if (!cmd.compare("P")) {
    //         char s;
    //         cin >> s;
    //         l.insert(pos, s);
    //     };
    //     // cout << "__" << *pos << '\n';
    // };

    // for (auto a: l) cout << a;
    // cout << '\n';

    // answer 2_STL
    string str;
    int m;
    cin >> str >> m;

    list<char> l;
    for (auto a: str) l.push_back(a);
    auto pos = l.end();

    for (int i=0; i<m; i++) {
        char cmd;
        cin >> cmd;
        if (cmd == 'L') {
            if (l.begin() != pos) pos--;
        } else if (cmd == 'D') {
            if (l.end() != pos) pos++;
        } else if (cmd == 'B') {
            if (l.begin() != pos) pos = l.erase(--pos);
        } else if (cmd == 'P') {
            char s;
            cin >> s;
            l.insert(pos, s);
        };
        // cout << "__" << *pos << '\n';
    };

    for (auto a: l) cout << a;
    cout << '\n';

    return 0;
}