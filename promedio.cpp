#include <iostream>
#include <conio.h>
using namespace std;
float promedio(float *puntero, float suma){
    float promedio=0;
    promedio = suma/5;
    if (promedio<6.0)
    {
        cout<<"El estudiante reprobo con un promedio de: "<<promedio;
    }
    if (promedio>6.0)
    {
        cout<<"El estudiante aprobo con un promedio de: "<<promedio;
    }
return 0;
}
int main(){ 
    float nota[5];
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"Ingrese la nota del estudiante: ";
        cin>>nota[i];
    }
    float suma=nota[0];
    for (int i = 1; i < 5; i++)
    {
        suma +=nota[i];
    }
    float *puntero=&suma;
    
    promedio(puntero,suma);
    
    return 0;
}