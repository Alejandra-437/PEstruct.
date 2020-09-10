#include <iostream>
#include <string.h>
using namespace std;

struct Estudiante{ 
    string nombre;
    string apellido;
    string estado="Indefinido";
    float notas[];
};
float promedio = 0;
float RecibirNotas(float *puntero, float suma, int m){ 
    promedio=suma/m;
    if (promedio<6.0)
    {
        cout<<"Reprobado\n";
    }
    if (promedio>6.0)
    {
        cout<<"Aprobado\n";
    }

}
int main(){ 
    struct Estudiante DatosE;
    int m=0;
    float notas=0;
    float promedio=0;
    cout<<"Ingrese el nombre del estudiante: \n";
    getline(cin, DatosE.nombre);
    cout<<"Ingrese el apellido del estudiante: \n";
    getline(cin, DatosE.apellido);
    cout<<"ingrese la cantidad de notas: \n";
    cin>>m;
    

    DatosE.notas[m];
    int i;
    for ( i = 0; i < m; i++)
    {
        cout<<"Ingrese la nota: ";
        cin>>DatosE.notas[i];
        cout<<endl;
    }
    float suma=DatosE.notas[i];
    for (int i = 0; i < m; i++)
    {
        suma +=DatosE.notas[i];

    }
    float *puntero=&suma;
    RecibirNotas(DatosE.notas, suma, m);
    cout<<"Estudiante: "<<DatosE.nombre<<' '<<DatosE.apellido<<endl;
    cout<<"Promedio: "<<promedio;

    return 0;
}
