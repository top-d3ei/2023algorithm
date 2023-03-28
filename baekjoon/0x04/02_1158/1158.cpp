// https://www.acmicpc.net/problem/1158
#include <iostream>
#include <list>

#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //answer 1
    // list<int> l = {};
    // int n,k;
    // cin >> n >> k;
    // for (int i=1; i<=n; i++) l.push_back(i);

    // auto pos = l.begin();
    // cout << "<";
    // while(l.size()) {
    //     if (l.size() != n) cout << ", ";

    //     for (int i=0; i<k-1; i++) {
    //         pos++;
    //         if (pos == l.end()) pos++;
    //     };
    //     cout << *pos;

    //     pos = l.erase(pos);
    //     if (pos == l.end()) pos++;
    // };
    // cout << ">" << '\n';

    //answer 2
    queue<int> q;
    int n,k;
    cin >> n >> k;
    for (int i=1; i<=n; i++) q.push(i);

    cout << "<";
    while(!q.empty()) {
        for (int i=0; i<k-1; i++) {
            q.push(q.front());
            q.pop();
        };
        cout << q.front();
        q.pop();
        if (q.size()) cout << ", ";
    }
    cout << ">";
    cout << '\n';

    return 0;
}