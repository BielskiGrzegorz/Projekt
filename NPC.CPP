/*
#include "NPC.HPP"
using namespace std;
NPC::NPC(){}
void NPC::wczytNPC(string s)
{
    ifstream plik(s);
    string linie;
    while(getline(plik, linie))
    {
        stringstream bob(linie);
        string nazwa, haslo;
        bob>>login;
        bob.ignore();
        bob>>haslo;
        dane.push_back(Konto(login,haslo));
    }
    plik.close();
}
*/

