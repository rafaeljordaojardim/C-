#include <iostream>

using namespace std;

int main()
{
    int valor1, valor2, opcao, resultado;
    cout << "Digite um numero\n\n";
    cout << "1 - multiplicar\n2 -Dividir\n3 - Somar\n4 - Subtrair\nopcao:";
    cin >> opcao;
    cout << "Digite o primeiro numero";
    cin >> valor1;
    cout << "Digite o segundo numero";
    cin >> valor2;

    switch(opcao){
    case 1:
            resultado = valor1 * valor2;
        break;
    case 2:
            resultado = valor1 / valor2;
        break;
    case 3:
            resultado = valor1 + valor2;
        break;
    case 4:
            resultado = valor1 - valor2;
        break;
    }
    cout << resultado;
    return 0;
}
