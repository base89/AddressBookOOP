#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.wylogowanieUzytkownika();

    return 0;
}
