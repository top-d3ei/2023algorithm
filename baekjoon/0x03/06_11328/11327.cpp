//https://www.acmicpc.net/problem/11328
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    //answer 1
    // for (int i=0; i<n; i++) {        
    //     int a_arr[26];
    //     string a, b;
    //     cin >> a >> b;

    //     fill(a_arr, a_arr+26, 0);
    //     for (int j=0; j<a.length(); j++) a_arr[a.at(j)-97]++;
    //     for (int j=0; j<b.length(); j++) a_arr[b.at(j)-97]--;

    //     bool isEqual = true;
    //     for (int j=0; j<a.length(); j++) if (a_arr[a.at(j)-97] != 0) isEqual = false;
    //     if (isEqual) cout << "Possible";
    //     else cout << "Impossible";
        
    //     cout << '\n';
    // };

    //answer 2
    for (int i=0; i<n; i++) {
        int a_arr[26];
        fill(a_arr, a_arr+26, 0);

        string a, b;
        cin >> a >> b;
        
        for (auto c: a) a_arr[c -'a']++;
        for (auto c: b) a_arr[c -'a']--;

        bool isPossible = true;
        for (auto c: a) if (a_arr[c -'a'] != 0) isPossible = false;

        if (isPossible) cout << "Possible";
        else cout << "Impossible";

        cout << '\n';
    };

    return 0;
}