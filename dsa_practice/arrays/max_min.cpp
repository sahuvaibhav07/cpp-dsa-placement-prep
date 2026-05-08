#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10, 5, 30, 2, 15};

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < 5; i++) {

        if(arr[i] > max) {
            max = arr[i];
        }

        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Max = " << max << endl;
    cout << "Min = " << min;

    return 0;
}
