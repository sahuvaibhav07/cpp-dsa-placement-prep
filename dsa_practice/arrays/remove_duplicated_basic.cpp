#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 20, 30, 30};

    cout << "Unique elements:\n";

    for(int i = 0; i < 5; i++) {
        bool duplicate = false;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }

        if(!duplicate) {
            cout << arr[i] << endl;
        }
    }

    return 0;
}