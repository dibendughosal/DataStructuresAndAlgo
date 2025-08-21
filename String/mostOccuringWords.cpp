#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Dibendu is a Good Student and he wants to be an engineer by profession.he is currently in his Fourth year";
    stringstream ss(str);
    vector<string> v;
    string temp;
    while (ss>>temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int count = 1;
    int maxCount = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if(v[i] == v[i-1]) count++;
        else count = 1;
        maxCount = max(maxCount, count);
    }
    count = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]== v[i-1]) count++;
        else count = 1;
        if(count == maxCount)
            cout<<v[i]<<" "<<maxCount<<endl;
    }
    
    
    
    
}