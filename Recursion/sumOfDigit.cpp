// Sum of digit
#include<iostream>
using namespace std;
void sumofDigit(int i, int sum){
    if (i < 1)
    {
        cout<<"Sum of Digit is "<<sum<<endl;
        return;
    }
    sumofDigit(i-1, sum+i);
}

int main(){
    int n;
    cin>>n;
    sumofDigit(n, 0);
}