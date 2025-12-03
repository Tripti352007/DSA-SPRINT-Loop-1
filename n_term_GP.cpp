//Take input integers a, r, n and print the first n terms of GP.
#include<iostream>
using namespace std;
int main(){
    int r,n,a;
    cout<<"Enter the value of first integer(a): ";
    cin>>a;
    cout<<"Enter the value of n terms: ";
    cin>>n;
    for(int r=1; r<=n; r++){
        cout<<a<<endl;
        a*=4;
    }
}