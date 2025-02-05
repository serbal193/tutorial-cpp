#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
    int num1, num2;
    num1 = 10;
    num2 = 5;

    int div = num1/num2;
    int resto = num1 % num2;

    cout << "O resultado da divisao e: " << div << endl;
    cout << "O resto da divisao e: " << resto << endl;

    system("pause");
    return 0;
}