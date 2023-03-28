// https://github.com/encrypted-def/basic-algo-lecture/blob/master/0x03/vector_example.cpp
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& v) {
    for (auto a: v) cout << a << " ";
    cout << '\n';
}

int main() {
    cout << "*** v1 ***" << '\n';
    vector<int> v1(3, 5);
    cout << v1.size() << '\n';
    print(v1);
    v1.push_back(7);
    print(v1);

    cout << "*** v2 ***" << '\n';
    vector<int> v2(2);
    print(v2);
    v2.insert(v2.begin()+1, 3);
    print(v2);

    cout << "*** v3 ***" << '\n';
    vector<int> v3 = {1,2,3,4};
    print(v3);
    v3.erase(v3.begin()+2);
    print(v3);

    cout << "*** v4 ***" << '\n';
    vector<int> v4;
    v4 = v3;
    print(v4);
    v4.pop_back();
    print(v4);
    v4.clear();
    print(v4);

    return 0;
}