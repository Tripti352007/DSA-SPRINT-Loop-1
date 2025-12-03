//Take input integers a, d, n, and print the first n terms of AP starting from a.
#include<iostream>
using namespace std;
int main(){
    int a,d,n;
    cout<<"Enter the value of n terms: ";
    cin>>n;
    a=2;
    for(d=1; d<=n; d++){
        cout<<a<<endl ;
        a+=3;
    }

}