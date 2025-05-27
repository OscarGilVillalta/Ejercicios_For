#include <iostream>
using namespace std;

int main(){

    int horas = 0, precio_hora = 5, salario = 0;
    string nombre = "", bucle = "s";

    while (bucle == "S" || bucle == "s")
    {
        cout << "Ingrese su nombre";
        cin >> nombre;
        cout << "Cuantas horas a trabajado";
        cin >> horas;
        if(horas <= 44){
            salario = horas * precio_hora;
        }else{
            salario = 44*precio_hora + 1.5*(precio_hora)*(horas-44);
        }

        cout << nombre << " su salario es de: " << salario;

        cout << "Desea pedir mas datos?" << endl;
        cout << "[S] Si" << endl;
        cout << "[N] No" << endl;
        cin >> bucle;
    }
    

    return 0;
}