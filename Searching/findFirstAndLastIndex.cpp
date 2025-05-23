#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{1,2,2,4,4,5,6,6,7};
    int start=0,mid,end=arr.size()-1,target=4,first=-1,last=-1;
    while(start<= end){
        mid=(start+end)/2;
        if(arr[mid]==target) {
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    start=0,end=arr.size()-1;
    while (start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]>target) end = mid-1;
        else start = mid+1;
        if(arr[mid]==target) {
            last=mid;
            start=mid+1;
        }
    }
    cout<<first<<" "<<last; 
    return 0;
    
}