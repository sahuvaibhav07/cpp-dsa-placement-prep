#include <iostream>
#include <vector>
using namespace std;

// Linear Search - O(n)
int linearSearch(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int target = 30;
    
    cout << "Linear Search Example" << endl;
    cout << "Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    cout << "Target: " << target << endl;
    int result = linearSearch(arr, target);
    
    if (result != -1) {
        cout << "Found at index: " << result << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    return 0;
}
