#include <iostream>
using namespace std;

int rev(string str, int start, int end)
{
    if (start >= end)
        return;

    char c = str[start];
    str[start] = str[end];
    str[end] = c;
    rev(str, start + 1, end - 1);
}

int main()
{
    // reverse a string
    string str = "mann";
    rev(str, 0, 4);
    cout << str << endl;
}