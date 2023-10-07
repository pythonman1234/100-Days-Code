#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = (n & 1);

        ans = (bit * pow(10, 1)) + ans;

        n = n >> i;
        i++;
    }

    cout << "Answer is" << ans << endl;
    return 0;
}
