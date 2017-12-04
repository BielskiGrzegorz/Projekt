#include <iostream>
#include "Konto.HPP"
#include <string>

using namespace std;

int main()
{
    string a="bazaDanych.txt";
    Konto Baza;
    Baza.wczytKont(a);
    Baza.noweKonto(a);
    Baza.zapisKont(Baza,a);
    return 0;
}
