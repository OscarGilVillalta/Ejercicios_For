#include <iostream>
using namespace std;

int main()
{
    float notas[5];

    for(int i = 0; i < 5; i++){
        cout << "Ingrese su nota "  << i+1 << ": \n";
        cin >> notas[i];
    }

    cout << "Notas impresas en orden \n";
    for(int i = 0; i < 5; i++){ //Imprimir notas en orden
        cout << notas[i] << endl;
    }

    cout << "Notas impresas al revez \n";
    for(int i = 5; i <= 0; i++){ //Imprimir notas de mayor a menor
        cout << notas[i] << endl;
    }

    return 0;
}