#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<string> cartas;

    cartas.push_front("Rei de Espadas");
    cartas.push_back("Rei de Copas");
    cartas.push_front("Rei de Ouro");
    cartas.push_back("Rei de Paus");

    cout << "Remove o ultimo elemento: "
         << "cartas.pop_back()"
         << "\n";
    cout << "Comprimento do conjunto: " << cartas.size() << "\n";

    return 0;
}