//*----------------------------------------------------------*
//*                 pchar.cpp                                *
//*                                                          *
//*    contoh pendefenisian variabel bertipe char dan        *
//*      dan penugasan konstanta char ke variabel            *
//*----------------------------------------------------------*
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()  {
	char kar ;	      // Pendefinisian variabel kar
    kar ='A';	      //  Penugasan ' A 'ke variabel kar
    system("cls");
    cout  << "isi kar = " << kar << '\n';
	kar = 66 ;	      // Penugasan nilai ASCII ke kar
	cout << "Isi kar = " << kar << '\n';
    //getche();
  }
