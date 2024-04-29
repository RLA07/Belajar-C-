#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

typedef struct {
    int tahun;
    int bulan;
    int tanggal;
} datung;

datung tgl_lhr;

int main() {
system("cls");
    tgl_lhr.tanggal=07;
    tgl_lhr.bulan=12;
    tgl_lhr.tahun=2005;

    cout << tgl_lhr.tanggal << '/' 
        << tgl_lhr.bulan << '/' 
        << tgl_lhr.tahun << endl;
//getch();
}