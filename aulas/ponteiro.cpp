#include <iostream>

using namespace std;

void soma(int *valor);

int main()
{

    string objeto = "mesa";
    string *ponteiro;

    // Atribuo o endereço de objeto ao ponteiro
    ponteiro = &objeto;

    cout << ponteiro << "\n";
    cout << objeto << "\n";
    // Reescrevo o valor do objeto
    *ponteiro = "computador";

    cout << ponteiro << "\n";
    cout << objeto << "\n"
         << "----------\n";

    int numero = 1;

    soma(&numero);

    cout << "numero " << numero << "\n";

    return 0;
}

void soma(int *valor)
{
    *valor += 10;
}
