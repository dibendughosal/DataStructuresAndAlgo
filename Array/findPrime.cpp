#include<bits/stdc++.h>
using namespace std;
void prime(int num){
    if(num < 2){
        return;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if(num%i==0)
            return;
            
        cout<<num<<" ";
        return;
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n;i++){
        cin>>arr[i];
    }
    cout<<"Prime - ";
    for(int i= 0;i<n;i++){
        prime(arr[i]);
    }
    

}