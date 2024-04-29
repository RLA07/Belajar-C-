#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
system("cls");

const float pi = 3.14;
float jari_jari, luas, keliling;

jari_jari = 7.0;

luas = pi * jari_jari * jari_jari;
keliling = 2 * pi * jari_jari;

cout << "Luas Lingkaran      = " << luas << endl;
cout << "Keliling Lingkaran  = " << keliling << endl;

getch();
}
