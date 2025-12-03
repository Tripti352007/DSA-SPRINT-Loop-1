//Take input integer n and print all multiples of 3 from 1 to n using a while loop.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"The multiple of 3 from 1 to "<<n<<" is ";
    int i=1;
    while(i<=n){
        cout<<i<<" , ";
        i+=2;i++;
    }
}