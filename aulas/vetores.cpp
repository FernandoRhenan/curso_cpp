#include <iostream>

using namespace std;

int main(){

    char letras[5];

    letras[0] = 'a';
    letras[1] = 'b';
    letras[2] = 'c';
    letras[3] = 'd';
    letras[4] = 'e';

    for(int i = 0; i<5; i++){
        cout << "Letra " << i+1 << ": " << letras[i] << "\n";
    }

    // ====================

    cout << "Segundo exemplo:\n\n";

    int numeros[9] = {1,2,3,4,5,6,7,8,9};

    for(int i = 0; i<sizeof(numeros) / 4; i++)
        cout << "Numero " << i+1 << ": " << numeros[i] << "\n";

    return 0;
}
