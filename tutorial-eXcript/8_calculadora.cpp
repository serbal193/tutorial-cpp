#include <iostream>
#include <stdlib.h>

using namespace std;

int main () 
{
    double num1, num2, sum, sub, mul, div;

    cout << "CALCULADORA\n" << endl;

    cout << "Digite o primeiro numero:" << endl;
    cin >> num1;

    cout << "Digite o segundo numero:" << endl;
    cin >> num2;

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    cout << "A soma e: " << sum << endl;
    cout << "A subtracao e: " << sub << endl;
    cout << "A multiplicacao e: " << mul << endl;
    cout << "A divisao e: " << div << endl;

    system("pause");
    return 0;

}