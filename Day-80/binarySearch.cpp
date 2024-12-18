#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int X)
{
    int mid = start + (end - start) / 2;
    if (arr[mid] == X)
    {
        return 1;
    }
    else if (arr[mid] < X)
    {
        return binarySearch(arr, mid + 1, end, X);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, X);
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 16, 12};
    int X = 12;
    cout << binarySearch(arr, 0, 5, X);
}