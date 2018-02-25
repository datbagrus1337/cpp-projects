//   _   __      _ _          _            _
//  | | / /     | | |        | |          | |
//  | |/ /  __ _| | | ___   _| | __ _  ___| | ____ _
//  |    \ / _` | | |/ / | | | |/ _` |/ __| |/ / _` |
//  | |\  \ (_| | |   <| |_| | | (_| | (__|   < (_| |
//  \_| \_/\__,_|_|_|\_\\__,_|_|\__,_|\___|_|\_\__,_|
//
//
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    int cislo1, cislo2, operat, vysledek;

cout << "Kalkulacka \n BY: datbagrus1337 \n";

start:cout << "Cislo #1: ";

cin >> cislo1;

cout << "Cislo #2: ";
cin >> cislo2;


vypocet:cout << "Nyni si zvol operaci:\n Scitani=1\n Odcitani=2\n Nasobeni=3\n Deleni=4\n";
cin >> operat;

  if (operat == 1)
        {vysledek=(cislo1 + cislo2);}

 if (operat == 2)
        {vysledek=(cislo1 - cislo2);}

 if (operat == 3)
        {vysledek=(cislo1 * cislo2);}

 if (operat == 4)
        {vysledek=(cislo1 / cislo2);}

if (operat>4)
{cout << "Zadal jsi spatny vyber, vracim te zpatky \n";
 goto vypocet;}

cout << "Vysledek: " << vysledek << "\n Prejes si pokracovat? \n Ano: 1/Ne: 2 \n";
cin >> operat;
  if (operat == 1)
        {goto start;}

          if (operat == 2)
        {cout << "Dekuji, ze jsi pouzil muj program, jsi sefis <3"; return 0;}



}
