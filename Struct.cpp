#include <iostream>
using namespace std;

struct Estudiante
{
    string nombre;
    string carnet;
    string carrera;
    char sexo;
    int edad;
};

int main(void)
{
    Estudiante estudiante;
    int cantidad = 0;
    estudiante = {
        "Oscar Ignacio Gil Villalta",
        "00186825",
        "Ingeniera informatica",
        'M',
        18};

        cout << "Nombre: "<< estudiante.nombre << endl
             << "Carnet: "<< estudiante.carnet << endl
             << "carrera: "<< estudiante.carrera << endl
             << "Sexo: "<< estudiante.sexo << endl
             << "Edad: "<< estudiante.edad << endl;
    
    cout << "Cantindad de estudiantes" << endl;
    cin >> cantidad;

    Estudiante perfil[cantidad];

    for(int i = 0; i < cantidad; i++){
        cout << "Perfil numero: " << i+1;
        cout << "Ingrese su nombre: " << endl;
        cin >> perfil[i].nombre;
        cout << "Ingrese el carnet: " << endl; 
        cin >> perfil[i].carnet;
        cout << "Ingrese el carrera: " << endl;
        cin >> perfil[i].carrera;
        cout << "Ingrese su sexo: " << endl;
        cin >> perfil[i].sexo;
        cout << "Ingrese su edad: " << endl;
        cin >> perfil[i].edad;   
    }

    for(int j = 0; j < cantidad; j++){
        cout << "Alumno numero " << j+1 << ":"
             << "Nombre: " << perfil[j].nombre << endl
             << "Carnet: " << perfil[j].carnet << endl
             << "Carrera: " << perfil[j].carrera << endl
             << "Sexo: " << perfil[j].sexo << endl
             << "Edad: " << perfil[j].edad << endl;
    }

    return 0;
}