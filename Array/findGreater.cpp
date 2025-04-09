#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {13, 9, 3, 17, 5};
    int size = sizeof(arr)/ sizeof(arr[0]);
    // cout<<size<<endl; //Size of array
    int max = arr[0];
    for(int i=0; i < size;i++){
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<"Maximum Value is "<<max;
}