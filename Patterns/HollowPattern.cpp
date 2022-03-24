#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int r, c;
    cin >> r >> c;   // hollow pattern

    for (int i =1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || i == r || j == 1 || j == c)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
