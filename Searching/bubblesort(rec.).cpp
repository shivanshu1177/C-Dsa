#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 5, 43, 32, 30};
    int n = sizeof(arr)/sizeof(int);
    int i = n-1;
    recursiveBubbleSort(arr, n, i)
    return 0;

}
