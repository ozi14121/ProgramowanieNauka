//Program zostal napisany przez "OZI"
//Ponizszy program jest przykladem wykorzystania
//struktur

//Biblioteka
#include <iostream>
#include <string>

using namespace std;

//Funkcje
void Program();

//Program Glowny
int main()
{
    Program();

    return 0;
}

//Funkcje C.D
void Program()
{
    cout << "Program stworzony przez \"OZI\""<<endl<<endl;

        struct dane
    {
        string name;
        int wiek;
        int wiek_postaci;
    };

    dane np {};

    cout << "Podaj swoj nick: ";
    cin >> np.name;

    cout << np.name << " " << np.wiek << " " << np.wiek_postaci<<endl<<endl;

    cout << "Podaj swoj wiek: ";
    cin >> np.wiek;

    cout << np.name << " " << np.wiek << " " << np.wiek_postaci<<endl<<endl;

    cout << "Podaj wiek swojej postaci: ";
    cin >> np.wiek_postaci;

    cout << np.name << " " << np.wiek << " " << np.wiek_postaci<<endl<<endl;
}
