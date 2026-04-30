#include <iostream>
using namespace std;
int main(){
    int arr[6] = {10, 20 , 20, 20, 30, 40};
    int key = 20;

    int start = 0, end = 5;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    if (ans != -1) {
        cout << "Element Found at index = " << ans;
    }
    else {
        cout << "Element Not Found";
    }
    
    return 0;
    
}