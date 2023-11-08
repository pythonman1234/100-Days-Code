#include <iostream>
using namespace std;

bool pallindromeCheck(string str, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return pallindromeCheck(str, i + 1, j - 1);
    }
}

int main()
{
    string name = "mannam";
    cout << endl;

    bool isPallindrome = pallindromeCheck(name, 0, name.length() - 1);

    if (isPallindrome)
    {
        cout << "It's a Pallindrome" << endl;
    }
    else
    {
        cout << "It's not a Pallindrome" << endl;
    }
    return 0;
}