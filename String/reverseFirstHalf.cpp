#include<bits/stdc++.h>
using namespace std;
int main(){
    string name = "DIBEND";
    int n = name.length();
    reverse(name.begin()+0, name.begin()+n/2);
    cout<<name;
}