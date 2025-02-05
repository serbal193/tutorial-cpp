#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
    cout << "Informe um numero:" << endl;

    int num1 = 0;
    cin >> num1;

    cout << "Informe mais um numero:" << endl;

    int num2 = 0;
    cin >> num2;

    int sum = num1 + num2;

    cout << "O numeros digitados foram: " 
    << num1 << " e " 
    << num2 << endl;

    cout << "A soma dos numeros foi: " << sum << endl;


    system("pause");
    return 0;
}