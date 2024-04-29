#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    int m=5, n=7;

    if ( m==n ) {
        cout << m << " sama dengan " << n << endl;
    }
    else if (m != n) {
        cout << m << " tidak sama dengan " << n << ", dan ";
        if (m < n){
            cout << m << " lebih kecil dari " << n << endl;
        }
        else if (m > n){
            cout << m << " lebih besar dari " << n << endl;
        }
    }
}
