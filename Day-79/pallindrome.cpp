#include <iostream>
using namespace std;

bool checkPal(string str, int start, int end)
{
    if (str[start] != str[end])
        return 0;
    else
        checkPal(str, start + 1, end - 1);
}

int main()
{
    string str = "mann";
    cout << checkPal(str, 0, 4) << endl;
}