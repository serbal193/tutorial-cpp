#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{   

    cout << "BEM VINDO AO TABUADOR!" << endl << endl;

    int tab = 0;
    cout << "Selecione qual a tabuada que vc deseja! (1-10) ";
    cin >> tab;

    cout << endl << "Tabuada do " << tab << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << " x " << tab << " = " << (i*tab) << endl;

    }

    cout << "Obrigado!"<< endl;

    system("pause");
    return 0;
}