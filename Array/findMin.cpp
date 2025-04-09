#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8] = { 44, 7, 11, 12, 8, 170, 5, 11};
    int min = arr[0];
    for (int i = 0; i < 8 ; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    cout<<min<< " ";
}
