#include <iostream>
using namespace std;

void dummy(int n)
{
    n++;
    cout << "n is" << endl;
}

int main()
{
    int n;
    cin >> n;

    dummy(n);

    cout << "number n is" << n << endl;

    return 0;
}