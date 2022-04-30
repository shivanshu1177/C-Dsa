#include <iostream>

using namespace std;

bool palindrome(int x){
    int rev=0;
    int temp = x;
    int lbb;
    while(temp!=0){
        lbb=temp%10;
        rev=rev*10+lbb;
        temp=temp/10;
    }
    return (rev==x);
    
}

int main(){

    int x;
    cin>>x;
    if(palindrome(x) == 1){
        cout<<"True";
    }else{
        cout<<"false";
    }


}