#include <iostream>
using namespace std;

void insertAtPosition(int arr[], int &n, int value, int position)
{
    if (position < 0 || position > n)
    {
        cout << "Invalid position!\n";
        return;
    }

    for (int i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    n++;
}

void deleteAtPosition(int arr[], int &n, int position)
{
    if (position < 0 || position >= n)
    {
        cout << "Invalid position!\n";
        return;
    }

    for (int i = position; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}

int main()
{
    cout << "=== Array Operations ===\n";

    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5;

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n\n";

    cout << "Inserting 25 at position 2\n";
    insertAtPosition(arr, n, 25, 2);
    cout << "After insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n\n";

    cout << "Deleting element at position 2\n";
    deleteAtPosition(arr, n, 2);
    cout << "After deletion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}
