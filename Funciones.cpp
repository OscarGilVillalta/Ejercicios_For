#include <iostream>
using namespace std;

float suma(float num1, float num2)
{
    float resultado = 0;

    resultado = num1 + num2;

    return resultado;
}

float resta(float num1, float num2)
{
    float resultado = 0;

    resultado = num1 - num2;

    return resultado;
}

float multiplicacion(float num1, float num2)
{
    float resultado = 0;

    resultado = num1 * num2;

    return resultado;
}

float division(float num1, float num2)
{
    float resultado = 0;
    if (num2 == 0 || num1 < num2)
    {
        return 1000;
    }
    else
    {
        resultado = num1 / num2;
    }

    return resultado;
}

int main()
{
    float num1 = 0, num2 = 0, resultado = 0;
    int operacion = 0;

    cout << "Operaciones" << endl
         << "Ingrese el primero numero" << endl;
    cin >> num1;
    cout << "Ingrese un segundo numero" << endl;
    cin >> num2;

    cout << "Que operacion desea hacer?" << endl
         << "[1] Suma" << endl
         << "[2] Resta" << endl
         << "[3] Multiplicacion" << endl
         << "[4] Division" << endl;
    cin >> operacion;

    switch (operacion)
    {
    case 1:
        resultado = suma(num1, num2);
        cout << "Su suma es: " << resultado << endl;
        break;
    case 2:
        resultado = resta(num1, num2);
        cout << "Su resta es: " << resultado << endl;
        break;
    case 3:
        resultado = multiplicacion(num1, num2);
        cout << "Su multiplicacion es: " << resultado << endl;
        break;
    case 4:
        resultado = division(num1, num2);
        if (resultado == 1000)
        {
            cout << "No se pudo evaluar";
        }
        else
        {
            cout << "Su division es: " << resultado << endl;
        }
        break;
    default:
        cout << "No imprimio un dato valido";
        break;
    }

    return 0;
}