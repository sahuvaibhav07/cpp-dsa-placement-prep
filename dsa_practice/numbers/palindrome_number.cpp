#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter a number: "; 
    cin >> x;

    int original = x;
    int rev = 0;

    while(x > 0){
        int digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }
    if(rev == original){
        cout << "The number is a palindrome." << endl;
    }
    else{
        cout << "The number is not a palindrome." << endl;
    }
    return 0;
}