#include <iostream>
using namespace std;

int CountZeros(int n)
{
    int res = 0;

    for (int i = 5; n/i > 1; i *= 5)
    {
        /* code */
        res += n/i;

    }
    return res;
}

int main()
{
    /* code */
    int n;
    cin >> n;
    cout << CountZeros(n);

    return 0;
}
