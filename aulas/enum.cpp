#include <iostream>

using namespace std;

int main(){
    // ENUM é um conjunto de constantes de tipo int

    // Começa no indice 0
    enum objetos{copo, folha, grampo, borracha};

    objetos objeto;

    objeto=folha;
    
    // imprime o indice relativo a constante;
    cout << objeto;

    return 0;
}