#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{2,4,6,8,5,3};
    int start=0, end=arr.size()-1,mid;
    while(start<end){
        mid = start + (end-start)/2;
        if(arr[mid]>arr[mid+1]) {
            end=mid;
        }
        else{
            start = mid + 1;
        }
    }
    return start;
}