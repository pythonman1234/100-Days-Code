#include <iostream>
using namespace std;

void print(int arr[], int index, int n)
{
    if (index == n)
    {
        return;

        cout << arr[index] << " ";
        print(arr, index + 1, n);
        // cout<<arr[index]<<" "

        // if we write code like this then it would print in reverse order
    }

    int main()
    {
        int arr[] = {3, 4, 1, 2, 8};
        print(arr, 0, 5);
    }
}