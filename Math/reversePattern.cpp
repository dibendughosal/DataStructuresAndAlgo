#include<iostream>
using namespace std;
int main(){
    int arr[] ={ 2, 13, 12 , 4, 8};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    
}