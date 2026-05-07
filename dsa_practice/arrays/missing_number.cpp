#include <iostream>
using namespace std;

int main(){
    int arr [4] = {1, 2, 4, 5};
    int n = 5;

    int total_sum = n * (n + 1) / 2;
    int arr_sum = 0;

    for (int i = 0; i < n - 1; i++){
        arr_sum += arr[i];
    }
    cout << "The missing number is: " << total_sum - arr_sum << endl;
    return 0;
}