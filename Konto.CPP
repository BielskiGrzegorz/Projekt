#include "Konto.HPP"
#include<sstream>
#include <windows.h>
using namespace std;

Konto::Konto(){};

Konto::Konto(string login1,string haslo1)
{
    login=login1;
    haslo=haslo1;
}

void Konto::wczytKont(string s)
{
    ifstream plik(s);
    string linie;
    while(getline(plik, linie))
    {
        stringstream bob(linie);
        string login, haslo;
        bob>>login;
        bob.ignore();
        bob>>haslo;
        dane.push_back(Konto(login,haslo));
    }
    plik.close();
}
int Konto::iloscKont()
{
    return dane.size();
}
void Konto::zapisKont(Konto& daneKonta, std::string nazwaPliku)
{
    ofstream zapis(nazwaPliku);
    for(int i=0;i<iloscKont();i++)
    {
        zapis<<dane[i].login<<" "<<dane[i].haslo<<endl;
    }
    zapis.close();
}
void Konto::noweKonto(string nazwaPliku)
{
    int dziala=0;
    string newLogin, newHaslo;
    cout<<"Podaj login : ";
    cin>>newLogin;
    cout<<endl;
    for(int i=0;i<iloscKont();i++)
    {
        if(newLogin==dane[i].login)
        {
            dziala++;
            break;

        }

    }
    if(dziala==0)
    {
        cout<<"Podaj haslo : ";
        cin>>newHaslo;
        cout<<endl;
        dane.push_back(Konto(newLogin,newHaslo));
    }
    else
    {
        cout<<" Dany Login jest zajety, sprobuj ponownie "<<endl;
        return noweKonto(nazwaPliku);
    }

}
bool Konto::logowanie()
{
    int dziala=0;
    int j;
    string newLogin, newHaslo;
    cout<<"Podaj login : ";
    cin>>newLogin;
    cout<<endl;
    for(int i=0;i<iloscKont();i++)
    {
        if(newLogin==dane[i].login)
        {
            dziala++;
            j=i;
            break;

        }

    }
    if(dziala==1)
    {
        cout<<"Podaj haslo : ";
        cin>>newHaslo;
        cout<<endl;
        if(newHaslo==dane[j].haslo)
        {
            system("cls");
            return true;
        }
        else{
            cout<<" Dany logowanie sa niepoprawne, chcesz sprobowac jeszcze raz? t/n "<<endl;
        char takNie;
        cin>>takNie;
        switch(takNie)
        {
        case 't' :
            {
                return logowanie();
            }
            break;
        case 'n' :
            {
                system("cls");
                return false;
            }
            default : break;
        }
        }
    }
    else
    {
        cout<<" Dany logowanie sa niepoprawne, chcesz sprobowac jeszcze raz? t/n "<<endl;
        char takNie;
        cin>>takNie;
        switch(takNie)
        {
        case 't' :
            {
                return logowanie();
            }
            break;
        case 'n' :
            {
                system("cls");
                return false;
            }
            default : break;
        }
    }

}
