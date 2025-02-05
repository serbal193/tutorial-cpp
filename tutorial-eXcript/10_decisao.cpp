#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{   
    cout << "Digite um numero qualquer" << endl;
    int valor = 0;
    cin >> valor;

    if (valor > 50) 
    {
        cout << "O valor e maior do que 50" << endl;
    }else{
        cout << "O valor e menor do que 50" << endl;
    }

    system("pause");
    return 0;
}