#ifndef Klasa_hpp
#define Klasa_hpp
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class Klasa
{
    public:
    virtual void leveluj(int poziom)=0;
    virtual double zadajDMG(std::string bronTyp, double bronDMG)=0;
    virtual void otrzymajDMG(double obrazenia,std::string bronTyp)=0;
};
class Mag
{
    public:
    double atak, atakM, obrona, obronaM;
    virtual void leveluj(int poziom);
    virtual double zadajDMG(std::string bronTyp, double bronDMG);
    virtual double otrzymajDMG(double obrazenia,std::string bronTyp);
};
class Wojownik
{
    public:
    double atak, atakM, obrona, obronaM;
    virtual void leveluj(int poziom);
    virtual double zadajDMG(std::string bronTyp, double bronDMG);
    virtual double otrzymajDMG(double obrazenia,std::string bronTyp);
};
class Palladyn
{
    public:
    double atak, atakM, obrona, obronaM;
    virtual void leveluj(int poziom);
    virtual double zadajDMG(std::string bronTyp, double bronDMG);
    virtual double otrzymajDMG(double obrazenia,std::string bronTyp);
};
class Lowaca
{
    public:
    double atak, atakM, obrona, obronaM;
    virtual void leveluj(int poziom);
    virtual double zadajDMG(std::string bronTyp, double bronDMG);
    virtual double otrzymajDMG(double obrazenia,std::string bronTyp);
};

#endif // Klasa
