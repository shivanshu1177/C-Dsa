#include <iostream>
using namespace std;

int main()
{
    /* code */
    int n;
    cin >> n;   // inverted half pattern

    for (int i = n; i >= 1; i--)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }
    
    
    return 0;
}
