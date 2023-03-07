//https://www.acmicpc.net/problem/2490
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //answer 1
    // vector<int> arr;
    // string s;
    
    // for (int i=0; i<3; i++) {
    //     getline(cin, s);
    //     int cnt = count(s.begin(), s.end(), '1');
    //     arr.push_back(cnt);
    // };

    // for (int i=0; i<arr.size(); i++){
    //     if (arr[i]==4) cout << 'E';
    //     else if (arr[i]==3) cout << 'A';
    //     else if (arr[i]==2) cout << 'B';
    //     else if (arr[i]==1) cout << 'C';
    //     else cout << 'D';
        
    //     cout << '\n';
    // };

    //answer 2
    string out = "DCBAE";
    int input, result;

    for (int c=0; c<3; c++) {
        result = 0;
        for (int i=0; i<4; i++) {
            cin >> input;
            if (input == 1) result += input;
        }
        cout << out[result] << '\n';
    }
    
    return 0;
}