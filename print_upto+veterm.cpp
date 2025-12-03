//Take input integer n, and print the AP 100, 97, 94… but only show the positive terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of integer n: ";
    cin>>n;
    int a=100;
    if(n<35){
        for(int i=n; i>0; i--){
        cout<<a<<endl;
        a-=3;
    }}
    else{
        cout<<"AP is negative after 34 terms"<<endl;
    }
    return 0;
}