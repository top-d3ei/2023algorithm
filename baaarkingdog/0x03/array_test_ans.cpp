#include <iostream>
using namespace std;

//임의의 숫자 추가
void insert(int idx, int num, int arr[], int& len);
//임의의 숫자 제거
void erase(int idx, int arr[], int& len);
void out(int arr[], int& len);

int main() {
    int arr[10] = {10, 50, 40, 30, 70, 20};
    int len = 6;
    out(arr, len);
    insert(3, 60, arr, len);
    erase(4, arr, len);

    return 0;
}

void insert(int idx, int num, int arr[], int& len) {
    if (len == 10) cout << "not";

    len++;
    //answer 1
    // for (int i=idx; i<len; i++) {
    //     int tmp = arr[i];
    //     arr[i] = num;
    //     num = tmp;
    // };

    //answer 2
    for (int i=len; i>idx; i--) {
        arr[i] = arr[i-1];
    };
    arr[idx] = num;
    
    out(arr, len);
}

void erase(int idx, int arr[], int& len){
    if (len == 0) cout << "not";

    for (int i=idx; i<len; i++) {
        arr[i] = arr[i+1];
    };
    len--;
    out(arr, len);
}

void out(int arr[], int& len) {
    for (int i=0; i<len; i++) {
        cout << arr[i] << ", ";
    };
    cout << endl;
}