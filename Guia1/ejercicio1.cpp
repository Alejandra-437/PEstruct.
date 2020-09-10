#include <iostream>
using namespace std;
//Escribir un programa en C++ que tenga almacenado un valor entero, ocupando punteros modificar el valor entero y mostrarlo en la consola.
int main(){ 
    int numero=0;
    
    cout<<"valor entero: "<<numero<<endl;

    int *puntero= &numero;
    *puntero=427;
    cout<<"valor modificado: "<<*puntero<<endl;
    *puntero=24365;
    cout<<"valor modificado: "<<*puntero<<endl;
    return 0;
}