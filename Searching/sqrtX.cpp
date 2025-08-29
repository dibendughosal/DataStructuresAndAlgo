// sqrt(X) - Leetcode 69 (Binary Search Approach)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int low = 0;
    long long high = x;
    while(low<= high){
            long long mid = low + (high - low)/2;
            if(mid*mid==x) {
                cout<< mid;
                return 0;
            }
            else if(mid*mid>x) high = mid -1;
            else low = mid +1;
    }
    cout<< high;
}