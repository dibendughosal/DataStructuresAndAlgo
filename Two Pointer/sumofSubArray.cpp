#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{2,3,4,10,15,27,29};
    int last=arr.size()-1,first=0;
    int sum;
    cin>>sum;
    while(first<last){
        if(arr[first]+arr[last] == sum){
            cout<<arr[first]<<" + "<<arr[last]<<" = "<<sum;
            return 0;
        }
        else if(arr[first]+arr[last] < sum){
            first++;
        }
        else{
            last--;
        }
    }
    cout<<"Not present"<<endl;
    return 0;
}