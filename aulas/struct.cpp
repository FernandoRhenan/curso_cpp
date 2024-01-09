#include <iostream>

using namespace std;

struct Carro
{
    string nome;
    string cor;
    int pot;
    int velMax;

    void insert(string n, string c, int p, int v)
    {
        nome = n;
        cor = c;
        pot = p;
        velMax = v;
    }

    void show()
    {
        cout << "Nome: " << nome << endl;
        cout << "Cor: " << cor << endl;
        cout << "Potencia: " << pot << endl;
        cout << "Velocidade Maxima: " << velMax << endl;
    }
};

int main()
{

    Carro car1;

    car1.insert("Fusca", "azul", 55, 100);
    car1.show();

    return 0;
}
