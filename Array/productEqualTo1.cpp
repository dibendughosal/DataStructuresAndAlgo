// minimum step to find product equal to 1
//  int arr[] = {-2,4,0} output = 5

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int mul = 1;
    int step =0;
    int count_zeros = 0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]< 0){
            step = step + (-1-arr[i]);
            mul *= -1;
        }
        else if(arr[i]>0){
            step = step + (arr[i]-1);
            mul *= 1;
        }
        else{
            step++;
            count_zeros++;
        }
    }
    if(mul == 1 || count_zeros>0) cout<<step;
    else cout<<step+2;
}