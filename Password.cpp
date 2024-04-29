#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    string usr, tpsswd, psswd;
    tpsswd = "12345678";
    system("cls");
    cout << "Masuukan Username: ";
    cin >> usr;

    bool password = false;
    int gagal = 0;
    while (!password && gagal < 5) {
        cout << "Masuukan Password: ";
        cin >> psswd;
        
        if (psswd == tpsswd) {
            password = true;
            cout << "hai " << usr << endl;
        }
        else {
            cout << "Harap masukkan password yang benar !!!" << endl;
            gagal++;
            if (gagal >= 5) {
                system("cls");
                cout << "Ulangi setelah beberapa saat" << endl;
            }
        }
    }
    return 0;
}
