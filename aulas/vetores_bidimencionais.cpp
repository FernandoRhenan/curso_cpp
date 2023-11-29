#include <iostream>
#include <cstdlib> // Para a função rand()
#include <ctime>   // Para a função time()

using namespace std;

int main(){

    std::srand(std::time(0));


    // Lógica para inserir numero aleatórios em um array bidimencional

    int len1 = 4;
    int len2 = 4;

    int array_bid[len1][len2];

    for(int i1 = 0; i1 < len1; i1++){
        for(int i2 = 0; i2 < len2; i2++){
            // Gerar um número aleatório entre 0 e 100
            array_bid[i1][i2] = std::rand() % 101;
        }
    }

    for(int i1 = 0; i1 < len1; i1++){
        for(int i2 = 0; i2 < len2; i2++){
            cout << array_bid[i1][i2] << " ";
        }
            cout << "\n";
    }

    return 0;
}