#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int mul=1;
    while(n>0){
        int digit = n%2;
        sum = sum + digit * mul;
        n /= 2;
        mul *= 10;
    }
    cout<<sum<<endl;
}