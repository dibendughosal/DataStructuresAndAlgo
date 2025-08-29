// Given a sorted array and an integer 'x' , find the lower bound of x.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[9] = {1,2, 4, 5, 9, 15, 18, 21, 24};
    int x = 20;
    int low = 0;
    int high = 8;
    while(low<=high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == x){
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]>x) {
            high = mid-1;
            cout<<arr[high];
        }
        else{
            low = mid+1;
        }
    }
    return -1; 
}