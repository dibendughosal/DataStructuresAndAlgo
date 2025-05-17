#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{11,23,10,13,16,32,4,6,8,14};
    cout<<"Enter target value - ";
    int t;
    cin>>t;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == t){
            cout<<"Element "<<t<<" present at "<<i<<endl;
            return 0;
        }
    }
    cout<<"element not present";
    
}