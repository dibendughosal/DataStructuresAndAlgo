#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string name = "I am Dibendu Ghosal";
    stringstream ss(name);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}
