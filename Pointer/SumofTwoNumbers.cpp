#include<iostream>
using namespace std;
int main(){
    int x,y;
    int* ptr1 = &x;
    int* ptr2 = &y;
    cin>>*ptr1>>*ptr2; // input via Pointer
    int total = *ptr1 + *ptr2;
    cout<<"total Sum: "<<total;
}