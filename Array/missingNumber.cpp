// Find missing number in array -
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={9,6,4,2,3,5,7,0,1};
    int n = arr.size() + 1;
    int expectedSum = n*(n-1) / 2;
    int arr_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        arr_sum += arr[i];        
    }

    cout<<"Missing Element - "<< expectedSum - arr_sum;
    

}