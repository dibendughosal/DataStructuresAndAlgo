#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{0, 1, 2, 3, 4, 5, 6, 7, 9, 11};
    int start=0,mid,ans=-1, end = arr.size()-1;
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid] == mid){
            start = mid+1;
        }
        else {
            end = mid-1;
            ans =mid;
        }
    }
    cout<<endl;
    cout<<ans;
}