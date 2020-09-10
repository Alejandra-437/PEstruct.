#include <iostream>
#include <string.h>
using namespace std;
int main(){ 
    char puntero[7]={'P','U','N','T','E','R','O'};
    char *p= puntero; 
    cout<<"el valor inicial de la cadena es: "<<*p<<'\t'<<"su direccion es: "<<&p<<'\t'<<*(p+2)<<endl;
    cout<<"Puntero aumentado en 3: "<<*(p+3)<<endl;
    cout<<*(p+4)<<'\t'<<*(p+5)<<'\t'<<*(p+6);
    return 0;
}