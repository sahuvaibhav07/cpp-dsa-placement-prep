#include <iostream>
using namespace std;

int main(){
    int arr[6] = {10, 20, 20, 20, 30, 40};
    int key = 20;

    int ans = -1;

    for(int i = 0; i < 6; i++){
        if(arr[i] == key){
            ans = i;
        }
    }
    if(ans != -1){
        cout << "Element Found at index = " << ans;
    }
    else {
        cout << "Element Not Found";
    }
    return 0;
}