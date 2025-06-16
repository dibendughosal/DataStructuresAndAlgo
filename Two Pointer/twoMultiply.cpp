#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{3,7,13,41,49,51};
    int first=0,last=arr.size()-1, multi=91;

    while (first<last)
    {
        if(arr[first]*arr[last]== multi){
            cout<<arr[first]<<" * "<<arr[last]<<" = "<<multi;
            return 0;
        }
        else if(arr[first]*arr[last] < multi){
            first++;
        }
        else{
            last--;
        }
    }
    
}