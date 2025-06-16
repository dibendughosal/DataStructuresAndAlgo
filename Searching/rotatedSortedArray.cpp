#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{5,6,7,8,9,1,2,3,4};
    int start=0,mid,end=arr.size()-1,index=-1;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
            index=mid+1;
        }    
        end= mid-1;
    }
    cout<<index;
}