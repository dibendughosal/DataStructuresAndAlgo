// check the number is amstrong or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dup=n;
    int sum =0;
    while(n>0){
        int digit = n%10;
        sum = (digit * digit * digit) + sum;
        n /= 10; 
    }
    if(sum == dup){
        cout<<dup<< " is an Amstrong Number."<<endl;
        return 0;
    }
    cout<<dup<<" is Not an amstrong number";
}