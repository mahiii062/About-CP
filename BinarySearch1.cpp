// Binary Search Iteration Process
#include <iostream>
using namespace std;

int BinarySearch(int arr[], int val, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (val == arr[mid])
            return mid;
        if (val > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int val = 7;
    // int n = sizeof(arr) / sizeof(int);

    int val;
    cin >> val;

    int res = BinarySearch(arr, val, 0, n - 1);
    if (res == -1)
        cout << "NOT FOUND" << endl;
    else
        cout << "FOUND" << endl;
}