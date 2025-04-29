#include<bits/stdc++.h>
using namespace std;
int findUnique(vector<int> nums){
    int ans = 0;
    for(int i = 0; i< nums.size();i++){
        ans = ans ^ nums[i];
    }
    return ans;
}
int main(){
    vector<int> nums{1, 2,1,2,3,5,3,7,5,7};
    cout<<"Unique Element is : "<<findUnique(nums);
}