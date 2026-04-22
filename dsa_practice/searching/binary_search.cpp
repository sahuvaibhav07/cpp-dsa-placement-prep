#include <iostream>
#include <vector>
using namespace std;

// Binary Search - O(log n)
int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 7;
    
    cout << "Binary Search Example" << endl;
    cout << "Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    cout << "Target: " << target << endl;
    int result = binarySearch(arr, target);
    
    if (result != -1) {
        cout << "Found at index: " << result << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    return 0;
}
