// ukol4.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include "DynamicArray.h"

using namespace std;

int main()
{
    DynamicArray *d1 = DynamicArray::repeat(5, 0);
    for (int i = 0; i < d1->getLength(); i++) {
        cout << d1->getAt(i) << " ";
    }
    cout << endl;

    DynamicArray* d2 = DynamicArray::range(5, -2);
    for (int i = 0; i < d2->getLength(); i++) {
        cout << d2->getAt(i) << " ";
    }
    cout << endl;

    DynamicArray* d3 = new DynamicArray(3);
    d3->add(1);
    d3->add(2);
    d3->add(3);
    d3->add(4);
    d3->add(5);
    d3->add(6);
    for (int i = 0; i < d3->getLength(); i++) {
        cout << d3->getAt(i) << " ";
    }
    cout << endl;
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
