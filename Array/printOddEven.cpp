#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8] = { -5, 7, 11, -2, 8, 170, 0, 11};
    int min = arr[0];
    for (int i = 0; i < 8 ; i++)
    {
        if (arr[i] % 2 == 1 || arr[i] % 2 == -1)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    cout<<min<< " ";
}
