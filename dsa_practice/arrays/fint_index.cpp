#include <iostream>
using namespace std;

int main (){
    int arr[5] = {11, 21, 31, 41, 51};
    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    for (int i =0; i<5; i++){
        if (arr [i]== target) {
            cout << "Element found at index: " << i << endl;
            return 0;
        }
    }
    cout << "Element not found in the array." << endl;
    return 0;
}