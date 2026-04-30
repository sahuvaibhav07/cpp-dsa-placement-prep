#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key) {
    int start = 0, end = n - 1, ans = -1;

    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}

int lastOccurrence(int arr[], int n, int key) {
    int start = 0, end = n - 1, ans = -1;

    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    int arr[6] = {10, 20, 20, 20, 30, 40};
    int n = 6;
    int key = 20;

    int first = firstOccurrence(arr, n, key);
    int last = lastOccurrence(arr, n, key);

    if(first == -1) {
        cout << "Element Not Found";
    } else {
        int count = last - first + 1;
        cout << "Count = " << count;
    }

    return 0;
}