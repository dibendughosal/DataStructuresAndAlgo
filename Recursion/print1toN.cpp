#include <iostream>
using namespace std;

void print1ToN(int i, int n) {
    if (i > n) return;
    cout << "Dibyo ";
    print1ToN(i+1, n);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    print1ToN(1, n);
    return 0;
}