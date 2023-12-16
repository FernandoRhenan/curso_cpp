#include <iostream>

using namespace std;

int main(){

    string objeto="mesa";
    string *ponteiro;

    // Atribuo o endereço de objeto ao ponteiro
    ponteiro = &objeto;

    cout << ponteiro << "\n";
    cout << objeto << "\n";
    // Reescrevo o valor do objeto
    *ponteiro="computador";

    cout << ponteiro << "\n";
    cout << objeto << "\n";

    return 0;

}
