//Program napisany przez : OZI
//Prosty program ktory pokaze wyniki
//z Dodawania, odejmowania, mnozenia i dzielenia


//Biblioteki
#include <iostream>

//Srodowiska
using namespace std;

//Zmienne
double x,y;

//Funkcje
void Prosty_Kalkulator();

//Glowny Program
int main()
{
    Prosty_Kalkulator();

    return 0;
}

//Funkcja
void Prosty_Kalkulator()
{
    cout<<"Kalkulator stworzony przez : OZI"<<endl<<endl;

    cout<<"Podaj pierwsza liczbe: ";
    cin>> x;

    cout<<"Podaj druga liczbe: ";
    cin>> y;
    cout<<endl;

    cout<<"Wynikiem dodawania jest: " <<x+y<<endl;
    cout<<"Wynikiem odejmownia jest: " <<x-y<<endl;
    cout<<"Wynikiem mnozenia jest: " <<x*y<<endl;
    cout<<"Wynikiem dzielenia jest: " <<x/y<<endl<<endl;

    cout<<"PAMIETAJ DZIELENIE PRZEZ ZERO W TYM PROGRAMIE POKAZE"<<endl;
    cout<<"/inf/ CZYLI NIESKONCZONOSC"<<endl<<endl;


}
