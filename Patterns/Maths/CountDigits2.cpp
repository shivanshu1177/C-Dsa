#include<iostream>
using namespace std;

int count(int n){
    if (n == 0) 
    return 0;
    return 1 + (count(n/10));
}

int main()
{
    /* code */
    int n = 0;
    int x = count(n);
    cout << x;
    //  cout << "Hello";

}
