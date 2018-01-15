#include "Klasa.hpp"

using namespace std;

void Mag::leveluj(int poziom)
{
    poziom=poziom+1;
    atak=atak+(poziom*0.1);
    atakM=atakM+(poziom*0.5);
    obrona=obrona+(poziom*0.1);
    obronaM=obronaM+(poziom*0.3);
}
double Mag::zadajDMG(string bronTyp, double bronDMG)
{
    double obrazenia;
    if(bronTyp=="malee")
    {
        obrazenia = atak + bronDMG;
    }
    else
    {
        obrazenia = atakM + bronDMG;
    }
    return obrazenia;
}
double Mag::otrzymajDMG(double obrazenia,string bronTyp)
{
    double obronaN;
    if(bronTyp=="malee")
    {
        obronaN=obrazenia-obrona;
    }
    else
    {
        obronaN=obrazenia-obronaM;
    }
    return obronaN;
}
