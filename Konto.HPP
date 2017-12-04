#ifndef Konto_HPP
#define Konto_HPP
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class Konto
{
    std::vector<Konto> dane;
    public:
    std::string login, haslo;
    Konto();
    Konto(std::string login1,std::string haslo1);
    int iloscKont();
    void wczytKont(std::string s);
    void zapisKont(Konto& daneKonta, std::string nazwaPliku);
    void noweKonto(std::string nazwaPliku);





};

#endif // Konto_HPP
