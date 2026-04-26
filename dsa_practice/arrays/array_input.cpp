# include <iostream>
using namespace std;

int main (){
    int arr[5];

    cout << "Enter 5 number :\n";

    for(int i = 0; i<5; i++){
        cin >> arr[i];

    }
    cout << "Array element are :\n";

    for (int i=0; i<5; i++){
        cout << arr[i]<< endl;
    }
   return 0;
}