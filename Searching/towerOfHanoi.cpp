#include<iostream>
using namespace std;

void solve(int n, char source, char helper, char target){
    if(n==0){
        return;
    }
    solve(n-1, source, target, helper);
    cout<<"Move "<< n<<" from "<<source<< " to "<<target<<endl;
    solve(n-1, helper, source, target);


}
int main(){
    int n;
    cin>>n;
    solve(n, 'S', 'H', 'T');



    return 0;
}