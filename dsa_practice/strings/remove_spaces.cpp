#include <iostream>
using namespace std;

int main(){
    char str[100];
    cin.getline(str, 100);

    char result[100];
    int j = 0;
    
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';
    cout << result << endl;
    return 0;
}