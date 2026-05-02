#include <iostream>
using namespace std;

int main(){
    char str[100000];
    cin >> str;

    int length = 0;
    while(str[length] != '\0')
        length++;
    
    int start = 0, end = length - 1;
    bool isPalindrome = true;

    while (start < end){
        if (str[start] != str[end]){
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}