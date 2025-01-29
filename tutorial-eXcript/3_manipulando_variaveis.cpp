#include <iostream>

using namespace std;

int main()
{
    int varInt = 100; // Definindo uma variável do tipo int
    char c = 'r'; // Definindo uma variável do tipo char
    double pFlutuante = 5.99; // Definindo uma variável do tipo double

    cout << "A variavel do tipo int = " << varInt << endl; // Construindo uma saída com textos e variáveis
    cout << "A variavel do tipo char = " << c << endl;
    cout << "A variavel do tipo double = " << pFlutuante << endl;

    cout << endl;

    cout << "Memoria variavel do tipo int = " << sizeof(varInt) << " bytes" << endl; // Função para ver o tamanho.
    cout << "Memoria variavel do tipo char = " << sizeof(c) << " bytes" << endl;
    cout << "Memoria variavel do tipo double = " << sizeof(pFlutuante) << " bytes" << endl;

    return 0;
}