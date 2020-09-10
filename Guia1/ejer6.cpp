#include <iostream>
#include <stdlib.h>
using namespace std;

int cuenta_vocales(char *);

int main()
{
   char *cadena;
   cadena = new char[50];
   cout << "Introduce cadena: ";
   fflush(stdin);
    gets(cadena); 
   //en la llamada a la funcion se envía
  //el array de caracteres
  
   cout << "Numero de vocales: " << cuenta_vocales(cadena) << endl;
    delete[] cadena;
   return 0;
}

int cuenta_vocales(char *cad) //cad coniene la direccion de inicio del array de caracteres
{
 int Acum=0;
 while(*cad) //mientras no llegue al nulo
 {
    switch(toupper(*cad)) //toupper pasa el carácter a mayúsculas para hacer la comprobación.
     {                          //el carácter original no se modifica.
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':  Acum++;
     }
     cad++;
  }
  return Acum;
}