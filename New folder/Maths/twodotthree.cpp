#include <iostream>

using namespace std;

int main()
{
    int i = 10, j = 5;
    int modR = 0;
    int divR = 0;

    modR = i % j;
    cout << modR << "";

    divR = i / modR;
    cout << divR;
}