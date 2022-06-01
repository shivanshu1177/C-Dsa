#include <
#include <array>  

using namespace std;

int main(){
    array<int> a; // creating an array a

    array<int> b(5, 1); //creating an array b of size 5 and having initial val: 1

    a.push_back(10);  //inserting values
    a.push_back(13);
    a.push_back(11);
    a.push_back(9);
    // size of a and b
    int aSize = a.size();  // using .size() method
    int bSize = b.size();

    //printing a
    for(int i =0; i< aSize; i++){
        cout<< a[i]<< endl;
    }

    cout << "1st element of a: " << a.front()<< endl;
    cout << "last element of a: " << a.back() << endl;

    cout << "Access element on 2nd index: "<< a.at(2)<< endl;

    cout << "Check if array a is empty or not" << a.empty()<< endl;
    for (int i = 0; i < bSize; i++)
    {
        cout << b[i] << endl;
    }
}