#include <iostream>
using namespace std;    

int main (){
    char str[100000];
    cin >> str;

    int count = 0;
    for (int i=0; str[i] != '\0'; i++){
        count++;
    }
    cout << "Length of the string is: " << count << endl;
    return 0;
}