#include <iostream>
#include <string.h>
using namespace std;
const int longCad= 20;
struct arregloDeCad
{
    char palabra[longCad+1];
};

int recibimiento(string cad[],int vocales){ 
    string *puntero= cad;
    string **puntero2= &puntero;
    cout<<*puntero;
    cout<<**puntero2;

}
int main(){ 
    
    
    char cad[]={};
    cout<<"Ingrese una frase: \n";
    cin>>cad;
    return 0;
}