#include <iostream>
using namespace std;

struct CUM
{
    string materia;
    int UV;
    float nota;
};

struct Estudiante
{
    string nombre;
    string carnet;
    int edad;
    float cum;
};

float CalcularCUM(CUM notas[3])
{
    int cantidadUV = 0;
    float notaTotal = 0, cum = 0;
    for (int j = 0; j < 3; j++)
    {
        cantidadUV += notas[j].UV;
        notaTotal += notas[j].nota*notas[j].UV;
    }
    cum = notaTotal / cantidadUV;

    return cum;
}

int main(void)
{

    CUM notas[3];
    Estudiante perfil[4];
    float cum = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "Materia numero: " << i + 1 << endl;
        cout << "Ingrese el nombre de la materia: ";
        cin >> notas[i].materia;
        cout << "Ingrese la cantidad de unidades valorativas: ";
        cin >> notas[i].UV;
        cout << "Ingrese su nota obtenida: ";
        cin >> notas[i].nota;
    };

    cum = CalcularCUM(notas);

    if (cum >= 7)
    {
        for (int k = 0; k < 1; k++)
        {
            cout << "Ingrese su nombre: ";
            cin >> perfil[k].nombre;
            cout << "Ingrese su carnet: ";
            cin >> perfil[k].carnet;
            cout << "Ingrese su edad: ";
            cin >> perfil[k].edad;
            perfil[k].cum = cum;

            cout << "Nombre: " << perfil[k].nombre << endl
                 << "Carnet: " << perfil[k].carnet << endl
                 << "Edad: " << perfil[k].edad << endl
                 << "CUM: " << perfil[k].cum << endl;
        }
    }else{
        cout << "Su CUM es menor a 7 por lo cual es invalido";
    }

    return 0;
}