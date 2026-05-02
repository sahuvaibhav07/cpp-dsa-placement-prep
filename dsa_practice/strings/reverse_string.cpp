#include <iostream>
using namespace std;

int main (){
    char str[100000];
    cin >> str;

    int length = 0;
    while(str[length] != '\0')
        length++;
    
        int start = 0, end = length - 1;

    while (start < end){
        swap(str[start], str[end]);
        start++;
        end--;
}
    cout << "Reversed string is: " << str << endl;
    return 0;
}