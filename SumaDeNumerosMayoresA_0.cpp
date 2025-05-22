#include <iostream>
using namespace std;

int main()
{
    int numero = 0, arreglo[5];

    while(numero >= 0){
        cout << "Ingrese un numero" << endl;
        cin >> arreglo[0];

        if(arreglo[0] >= 0){
            cout << "Es mayor a cero";
        }
    }
    return 0;
}