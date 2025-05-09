// Binary to decimal
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int mul = 1;
    while(n>0){
        int remain = n%10;
        sum = sum + remain * mul;
        n/=10;
        mul *= 2;
    }
    cout<<sum;
}