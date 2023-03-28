// https://github.com/encrypted-def/basic-algo-lecture/blob/master/0x04/linked_list_test.cpp
#include <iostream>
#include <algorithm>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, int num) {
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];

    if (nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    
    unused++;
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traverse() {
    int idx = nxt[0];
    while (idx != -1) {
        cout << dat[idx] << " ";
        idx = nxt[idx];
    };

    cout << '\n';
}

void insert_test() {
    cout << "***** insert_test **** \n";
    insert(0, 10);
    traverse();
    insert(0, 30);
    traverse();
    insert(2, 40);
    traverse();
    insert(1, 20);
    traverse();
    insert(4, 70);
    traverse();
}

void erase_test() {
    cout << "***** erase_test **** \n";
    erase(1);
    traverse();
    erase(2);
    traverse();
    erase(4);
    traverse();
    erase(5);
    traverse();
}

int main() {
    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);
    insert_test();
    erase_test();

    return 0;
}