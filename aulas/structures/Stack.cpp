#include <iostream>
#include <stack>

using namespace std;

int main()
{

    stack<string> cartas;

    cartas.push("Rei de Espadas");
    cartas.push("Rei de Copas");
    cartas.push("Rei de Ouro");
    cartas.push("Rei de Paus");

    cout << "Comprimento do conjunto: " << cartas.size() << "\n";

    return 0;
}