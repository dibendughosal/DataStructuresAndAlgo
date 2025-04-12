// Print n to 1 using backtracking
#include <iostream>
using namespace std;
void func(int i, int n){
    if(i > n) return;
    func(i+1, n);
    cout<<i<<endl;
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    func(1,n);
}