#include <iostream>
using namespace std;
int main(){ 
    int numero1=0;
    int numero2=0;
    cout<<"Escriba el primer valor entero: \n";
    cin>>numero1;
    cout<<"Escriba el segundo valor entero: \n";
    cin>>numero2;

    int *puntero1= &numero1;
    int *puntero2= &numero2;

    cout<<"El valor de la primera variable es: "<<*puntero1<<endl;
    cout<<"Y su direccion es: "<<puntero1<<endl<<endl;
    cout<<"El valor de la segunda variable es: "<<*puntero2<<endl;
    cout<<"Y su direccion es: "<<puntero2;

    return 0;
}