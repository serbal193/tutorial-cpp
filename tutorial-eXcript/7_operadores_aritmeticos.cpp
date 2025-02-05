#include <iostream>
#include <stdlib.h>

using namespace std;

int main () 
{
    float x, y;

    x = 11;
    y = 20;

    cout << "O valor de x: " << x << endl;
    cout << "O valor de y: " << y << "\n" << endl;
    
    cout << "Soma" << endl;
    cout << "Resultado: " << x + y << endl;

    cout << "Subtracao" << endl;
    cout << "Resultado: " << x - y << endl;

    cout << "Multiplicacao" << endl;
    cout << "Resultado: " << x * y << endl;

    cout << "Divisao" << endl;
    cout << "Resultado: " << x / y << endl;

    system("pause");
    return 0;
}