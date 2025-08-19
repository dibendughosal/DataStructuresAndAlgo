#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "abcdef";
    int len = str.length();
    cout<<str.substr(len/2);
}