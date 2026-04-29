#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 50,};
    int key = 30;

    int start = 0;
    int end = 4;
    bool found = false;

    while(start <= end){
        int mid = (start + end) /2;

        if(arr[mid] == key){
            found = true;
            break;
        }
        else if(arr[mid] < key){
            start = mid +1;
        }
        else {
            end = mid -1;
        }
    }
    if (found) 
    cout << "Element Found" ;

    else 
    cout << "Element Not Found";

    return 0;
}