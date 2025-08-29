// given a sorted array of n elements & target 'x'. find first occurrence pf X. or return -1 if not exist.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[13] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int x;
    cin>>x;
    int low = 0;
    int high = 12;
    int idx = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid] == x){
            idx = mid;
            high = mid - 1;
        }
        else if(arr[mid] > x) high = mid - 1;
        else low = mid + 1;
    }
    cout <<x<<" - First Occurrence at : "<< idx;

}