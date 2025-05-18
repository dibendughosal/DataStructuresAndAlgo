#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{0, 1, 2,3, 4, 5, 7, 9, 11};
    int start=0,mid, end = arr.size()-1,value=0;
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid] == mid){
            start = mid+1;
        }
        else end = mid-1;
    }
    cout<<start;
}