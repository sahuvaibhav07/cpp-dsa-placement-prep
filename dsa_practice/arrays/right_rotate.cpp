#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int last = arr[4];

    for(int i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}