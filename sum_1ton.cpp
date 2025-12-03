//Take input integer n and print the sum from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    int sum= (n*(n+1))/2;
    cout<<"The sum of 1 to "<<n<<" is "<<sum;
    return 0;
} 