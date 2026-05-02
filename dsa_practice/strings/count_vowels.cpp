#include <iostream>
using namespace std;

int main (){
    char str[100000];
    cin >> str;

    int count = 0;
    for (int i=0; str[i] != '\0'; i++){
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            count++;
        }
    }
    cout << "Number of vowels in the string is: " << count << endl;
    return 0;
}