#include "Mapa.HPP"
using namespace std;

Mapa::Mapa(){}

void Mapa::wczytajMape(string s)
{
    ifstream wczyt(s);
    for(int i=0;i<1000;i++)
    {
         for(int j=0;j<10000;j++)
         {

             wczyt>>mapa[i][j];
         }
    }
    wczyt.close();
}
void Mapa::wyswietlMape(int x,int y)
{
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<40;j++)
        {

            cout<<mapa[i][j];
        }
        cout<<endl;
    }

}
