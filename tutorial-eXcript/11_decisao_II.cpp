#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{   
    double nota1, nota2, nota3, nota4;

    cout << "Digite a nota do 1st bimestre: ";
    cin >> nota1;

    cout << "Digite a nota do 2nd bimestre: ";
    cin >> nota2;

    cout << "Digite a nota do 3rd bimestre: ";
    cin >> nota3;

    cout << "Digite a nota do 4th bimestre: ";
    cin >> nota4;

    double soma = nota1 + nota2 + nota3 + nota4;
    soma = (soma / 4);

    cout << "A sua media anual foi: " << soma << endl << endl;

    if(soma >= 7){
        cout << "Parabens! Voce foi aprovado!" << endl;

    }else{
        if (soma >= 5){
            cout << "Que pena, voce foi para o exame final!!!" << endl;
        }else{
            cout << "Eita, voce foi reprovado!!!" << endl;
        }
        
    }

    system("pause");
    return 0;
}