#include <iostream>
#include <queue>

using namespace std;

int main()
{

    queue<string> cartas;

    cartas.push("Rei de Espadas");
    cartas.push("Rei de Copas");
    cartas.push("Rei de Ouro");
    cartas.push("Rei de Paus");

    cout << "Primeiro da fila: " << cartas.front() << "\n";
    cout << "Ultimo da fila da fila: " << cartas.back() << "\n";
    cout << "Comprimento do conjunto: " << cartas.size() << "\n";
    return 0;
}