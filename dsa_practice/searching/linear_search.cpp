#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cout << "=== Linear Search ===\n";

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int target = 40;

    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    int result = linearSearch(arr, n, target);

    if (result != -1)
    {
        cout << "Element " << target << " found at index: " << result << "\n";
    }
    else
    {
        cout << "Element " << target << " not found\n";
    }

    return 0;
}
