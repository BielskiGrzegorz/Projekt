#ifndef Mapa_HPP
#define Mapa_HPP
#include <iostream>
#include <fstream>
#include <string>
class Mapa
{
    public:
        Mapa();
    char mapa[40][40];
    int x,y;
    void wczytajMape(std::string s);
    void wyswietlMape(int x, int y);

};

#endif // Mapa_HPP
