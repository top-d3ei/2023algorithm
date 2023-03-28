// https://github.com/encrypted-def/basic-algo-lecture/blob/master/0x04/list_example.cpp
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1,2};
    
    // C++ 11 미만
    // list<int>::iterator t = l.begin();
    // l.push_front(10);
    // cout << *t << '\n';
    // l.push_back(5);
    // l.insert(t, 6);
    // t++;
    // t = l.erase(t);

    // cout << *t << '\n';
    // for (list<int>::iterator it = l.begin(); it!=l.end(); it++) cout << *it << ' ';
    
    // C++ 11 이상
    auto t = l.begin();
    l.push_front(10);   // _10 1 2
    cout << *t << '\n'; // 1
    l.push_back(5);     // _10 1 2 5
    l.insert(t, 6);     // _10 6 1 2 5
    t++;                // _t = 2
    t = l.erase(t);     // _t = 5
    cout << *t << '\n'; // 5
    for (auto i: l) cout << i << ' ';   // 10 6 1 5
    cout << '\n';

    return 0;
}