// binary works on sorted array 

#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<int> arr{12,22,33,44,55,66,77};
        int k=55;
        int mid,start=0,end=arr.size()-1;
        while(start<=end){
            mid = (start+end)/2;
            if(arr[mid]==k){ 
                cout<<mid; 
                return 0;
            }
            else if(arr[mid]<k) start = mid+1;
            else end = mid-1;
        }
        cout<< -1;
    }