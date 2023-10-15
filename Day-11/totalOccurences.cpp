#include <iostream>
using namespace std;

int binarySearch(int a[], int l, int r, int x)
{
    if (r < l)
        return -1;

    int mid = l + (r - l) / 2;

    if (a[mid] == x)
        return mid;

    if (a[mid] > x)
        return binarySearch(a, l, mid - 1, x);

    return binarySearch(a, mid + 1, r, x);
}

int countOccurrences(int a[], int n, int x)
{
    int ind = binarySearch(a, 0, n - 1, x);

    if (ind == -1)
        return 0;

    int count = 1;
    int left = ind - 1;
    while (left >= 0 && a[left] == x)
        count++, left--;

    int right = ind + 1;
    while (right < n && a[right] == x)
        count++, right++;

    return count;
}

int main()
{
    int a[] = {4, 5, 6, 6, 9, 9, 11, 11, 11, 13, 13};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 11;
    cout << countOccurrences(a, n, x);
    return 0;
}