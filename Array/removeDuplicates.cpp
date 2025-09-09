// Remove duplicates from Sorted array.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,2,3,4,5,5,5,6,6,7};
    int size = sizeof(arr) / sizeof(int);
    int note = 0,index=0;
    for (int i = 0; i < size; i++)
    {
        if(note != arr[i]){
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