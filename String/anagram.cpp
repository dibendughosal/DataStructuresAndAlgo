#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "anagram";
    string t = "nagaram";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<1;
    else cout<<0;

}