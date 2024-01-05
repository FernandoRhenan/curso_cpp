#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    char *nome;
    nome = (char *)malloc(sizeof(char) + 1);

    cin >> nome;

    cout << nome;

    system("pause");
    return 0;
}
