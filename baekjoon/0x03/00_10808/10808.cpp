//https://www.acmicpc.net/problem/10808
#include <iostream>
#include <algorithm>
// #include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int len = 26;
    //answer 1
    // char s[len] = {
    //     'a','b', 'c','d','e',
    //     'f','g', 'h','i','j',
    //     'k','l', 'm','n','o',
    //     'p','q', 'r','s','t',
    //     'u','v', 'w','x','y',
    //     'z'
    // };
    // int sn[len];
    // fill(sn, sn+len, 0);
    
    // string str;
    // cin >> str;
    // for (char a: str){
    //     for (int i=0; i<len; i++) {
    //         if (s[i] == a) {
    //             sn[i]++;
    //             break;
    //         };
    //     };
    // };

    // for (int n: sn) cout << n << ' ';

    //answer 2
    int arr_az[len];
    fill(arr_az, arr_az+len, 0);
    
    string in_str;
    cin >> in_str;
    
    for (auto str: in_str) arr_az[str - 'a']++;
    for (int n: arr_az) cout << n << ' ';
    cout << endl;

    return 0;
}