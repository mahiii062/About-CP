// Binary Search Recursive Process
#include <iostream>
using namespace std;

int BinarySearch(int arr[], int low, int high, int val)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == val)
        return mid;

    if (arr[mid] > val)
        return BinarySearch(arr, low, mid - 1, val); // Search in the left half

    return BinarySearch(arr, mid + 1, high, val); // Search in the right half
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int val;
    cin >> val;

    int res = BinarySearch(arr, 0, n - 1, val);
    if (res == -1)
        cout << "NOT FOUND" << endl;
    else
        cout << "FOUND" << endl;
}
