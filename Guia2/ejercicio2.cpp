#include <iostream>
#include <string.h>
using namespace std;//pendiente!!!!!!!!!!!
struct Estudiante{ 
    string nombre;
    string apellido;
    float notas[];
};
struct Estudiante Estudiantes[]={};
struct Estudiante Estud;
float DatosDeEstudiantes(int n, int cantnotas){ 
    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese el nombre del estudiante: \n";
        getline(cin, Estudiantes[i].nombre);
        cout<<"Ingrese el apellido del estudiante: \n";
        getline(cin, Estudiantes[i].apellido);
        cout<<"ingrese las calificaciones del estudiante: \n";
        
        for (int j = 0; j < cantnotas; j++)
        {
            cin>>Estudiantes[i].notas[cantnotas];
        }
        
    }
    
    
}
int main(){ 
    int n=0 ,m=0;
    float cantnotas=0;
    float promedio=0;
    cout<<"Ingrese la cantidad de estudiantes: ";
    cin>>n;
    Estudiantes[n];
    cout<<"\n Ingrese cantidad de notas por estudiantes: ";
    cin>>cantnotas;
    cin.ignore();
    return 0;
}