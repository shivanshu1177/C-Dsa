    #include <iostream>
    using namespace std;

    int count(int n)
    {
        int count = 0;
        while (n != 0)
        {
            count++;
            n /= 10;
        }
        return count;
    }
    int main()
    {
        int n;
        cout << "Enter a number: ";
        cin >> n;
        cout << "The number of digits in " << n << " is " << count(n) << endl;
        return 0;
    }