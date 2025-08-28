// Given an array nums of size n, return the majority element. (LEETCODE 169)

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
        int n = nums.size() / 2;
        for(int i=0;i<nums.size();i++){
            int count = 1;
            for(int j = i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count > n) return nums[i];
        }
        return -1;
}
int main(){
    int size;
    cin>>size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout << majorityElement(arr) << endl;
    
}