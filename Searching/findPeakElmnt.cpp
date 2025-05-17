#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{2,4,6,8,5,3};
    int start=0, end=arr.size()-1,mid;
    while(start<=end){
        mid = end + (start-end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) {
            cout<<arr[mid];
            return 0;
        }
        else if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]) start = mid + 1;
        else end = mid-1;
    }
}