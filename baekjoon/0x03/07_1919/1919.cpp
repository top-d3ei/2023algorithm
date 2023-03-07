//https://www.acmicpc.net/problem/1919
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr1[26], arr2[26], equal_cnt=0;
    fill(arr1, arr1+26, 0);
    fill(arr2, arr2+26, 0);

    string a, b;
    cin >> a >> b;

    for (auto c: a) arr1[c -'a']++;
    for (auto c: b) arr2[c -'a']++;

    // for (char c='a'; c<'z'+1; c++) equal_cnt += abs(arr1[c -'a'] - arr2[c -'a']);
    for (int i=0; i<26; i++) equal_cnt += abs(arr1[i] - arr2[i]);

    cout << equal_cnt << '\n';
    
    return 0;
}