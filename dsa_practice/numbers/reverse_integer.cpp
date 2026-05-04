#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;

    int rev = 0;
    while(x != 0){
        int rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }
    cout << "Reversed number: " << rev << endl;
    return 0;
}