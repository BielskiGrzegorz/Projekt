#include <iostream>
#include "Konto.HPP"
#include "Mapa.HPP"
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;
void gotoxy(int x, int y)
{
    COORD cord;
    cord.X = x;
    cord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}

int main()
{
    string a="bazaDanych.txt",b=("mapa.txt");
    Konto Baza;
    Mapa Jan;
    Baza.wczytKont(a);
    bool gra;


    system("cls");
    Jan.wczytajMape(b);
    char opcja;
    cout<<"MENU"<<endl;
    cout<<"1) Zaloguj"<<endl<<"2)Zaloz konto"<<endl<<"3) Wyjdz";
    cin>>opcja;
    switch(opcja)
    {
    case '1' :
        {
            gra=Baza.logowanie();

        }
        break;
    case '2' :
        {
           Baza.noweKonto(a);
           Baza.zapisKont(Baza,a);
        }
        break;
    case '3' :
        {
            exit(0);
        }
        break;
    }
    int x=1,y=1;
     char c='n';
     if(gra==true)
     {
         for(;;)
    {
        Jan.wyswietlMape(1,1);
        switch (c)
        {
        case 'a':
            {
                if(Jan.mapa[x][y-1]!='x')
                y=y-1;

            }
            break;
            case 'd':
            {
                if(Jan.mapa[x][y+1]!='x')
                y=y+1;

            }
            break;
            case 'w':
            {
                if(Jan.mapa[x-1][y]!='x')
                x=x-1;

            }
            break;
             case 's':
            {
                if(Jan.mapa[x+1][y]!='x')
                x=x+1;

            }
            break;
        }
        gotoxy(y,x);
        cout<<'O';

        c=getch();
        system("cls");
    }

     }

    return 0;
}
