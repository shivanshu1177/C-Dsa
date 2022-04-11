#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n == 1){
        return false;
    }
    for (int i = 2; i*i <= n; i++)
    {
        /* code */
        if (n%i == 0)
        {
            /* code */
            return false;
        }
        
    }
    return true;
     
    
    
}

int main()
{
    /* code */
    cout << isPrime(10);
}
