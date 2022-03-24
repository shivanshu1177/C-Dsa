#include <iostream>
using namespace std;

int main()
{
    /* code */
    int r, c;
    cin >> r >> c;   // row= 5, col = 4 for rectangle pattern

    for (int i =1; i <= r; i++)
    {
        /* code */
        for (int j = 1; j <= c; j++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
