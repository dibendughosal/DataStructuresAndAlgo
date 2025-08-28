
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{5,0,1,2,0,0,4,0,3};
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < arr.size()-1; i++)
    {
        for (int j = 0; j < arr.size()-1; j++)
        {
            if(arr[j] == 0){
                swap(arr[j],arr[j+1]);
            }
        }
    };

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}