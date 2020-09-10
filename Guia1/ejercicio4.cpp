#include <iostream>
using namespace std;
void llenado_de_arreglo(int arreglo, int x, int a[], int mayor){ 
    for (int i = 0; i < arreglo ; i++)
    {
        cout<<"ingrese el valor: \n";
        cin>>x;
        if (i==0)
        {
            mayor= x;
        }
        else
        {
            if (x>mayor)
            {
               mayor=x;
            }   
        } 
    }
    int *puntero=&mayor;
    cout<<"La variable maxima es: "<<*puntero<<endl;
}
int main(){ 
    int arreglo=0;
    int x=0;
    int a[]={}, mayor=0;
    cout<<"Ingrese la cantidad de valores enteros quiere en su lista: \n";
    cin>>arreglo;
    llenado_de_arreglo(arreglo, x, a, mayor);
    return 0;
}