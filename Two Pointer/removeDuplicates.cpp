#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{1,1,2,2,3,3,5,10,10,10,20};
    int note =0,index=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] != note){
            arr[index] = arr[i];
            note = arr[i];
            index++;
        }
    }
    for (int i = 0; i < index; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}