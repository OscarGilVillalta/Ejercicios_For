#include <iostream>
using namespace std;

int main()
{
    int numero = 0, total = 0, posicion = 0;
    int sumatoria[25] = {};

    while(true){
        cout << "Ingrese un numero" << endl;
        cin >> numero;
        
        posicion++;
        if(numero < 0){
            break;
        }else{
            sumatoria[posicion] = numero;
        }
    }

    for(int i = 0; i < 25; i++){
        total += sumatoria[i];
    }

    cout << "El total de la suma es: " << total;

    return 0;
}