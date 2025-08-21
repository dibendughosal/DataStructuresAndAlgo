#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
int main(){
    string arr[] = {"0123","0023","456","00182","940","002901"};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = stoi(arr[0]);
    int pos=0;
    for (int i = 1; i <= n; i++)
    {
        int num = stoi(arr[i]);
        if(max<num) {
            max = num;
            pos = i;
        }
    }
    cout<<max<<" "<<pos<<endl;
}