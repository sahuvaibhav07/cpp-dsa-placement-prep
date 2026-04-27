#include <iostream>
using namespace std;

int main(){
    int arr[5]= {10, 20 , 30, 40, 50};
    int target;
    bool found = false;

    cout << "Enter the number to search: ";
    cin >> target;

    for (int i = 0; i <5 ; i++){
        if (arr[i] == target){
            found = true;
            break;
        }
    }
    if (!found){
        cout << "Element not found in the array." << endl;
    } else {
        cout << "Element found in the array." << endl;
    }
    return 0;
}