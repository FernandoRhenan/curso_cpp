#include <iostream>

using namespace std;

struct Carro
{
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main()
{

    Carro car1;

    car1.nome = "Fusca";
    car1.cor = "azul";
    car1.pot = 55;
    car1.velMax = 100;

    cout << "Nome: " << car1.nome << endl;
    cout << "Cor: " << car1.cor << endl;
    cout << "Potencia: " << car1.pot << endl;
    cout << "Velocidade Maxima: " << car1.velMax << endl;

    return 0;
}
