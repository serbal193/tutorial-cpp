#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    // obj cin --> entrada
    // obj cout <-- saida
    // << operador de inserção
    // >> operador de extração

    cout << "Estudando entrada e saida de dados!" << endl;
    cout << 10 + 50 << endl;

    // Passando o manipulador para que seja impresso em hexadecimal
    cout << hex << 10 + 50 << endl;
    cout << dec; // Redefine para decimal

    // Passando o manipulador para que defina o tamanho de campo
    // para 1000
    cout << setw(1000) << 10 + 50 << endl;  

    system("pause");
    return 0;
}