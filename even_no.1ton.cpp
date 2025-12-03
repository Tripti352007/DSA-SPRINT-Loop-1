//Take input integer n and print all even numbers from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    for(int i=2; i<=n; i+=2){
        cout<<i<<endl;
    }
}