#ifndef Staty_HPP
#define Staty_HPP
#include <iostream>
#include <fstream>
#include <vector>

class Staty
{
    std::vector<Staty> staty;
    public:
    Staty();
    string imie;
    double atak, obrona, szybkosc, inteligencja;
    int zycie, mana, poziom, exp;
};

#endif // Staty_HPP
