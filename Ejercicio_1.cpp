#include <iostream>
using namespace std;

int main(){
    int numero = 0;

    cout << "Ingrese un numero entero mayor a 0" << endl;
    cin >> numero;

    for(int i = 2; i < numero; i+=2){
        cout << i << endl;
    }

    return 0;
}