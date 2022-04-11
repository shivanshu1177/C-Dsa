#include <iostream>
using namespace std;

int gcd(int a, int b){
    int r = min(a, b);
    while (r>0)
    {
        /* code */
        if (a%r == 0 && b%r == 0)
        {
            /* code */
            break;
        }
        r--;
        
    }
    return r;
    
}

int main()
{
    
    cout << gcd(2, 8);
}
