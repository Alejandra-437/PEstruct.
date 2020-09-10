#include <iostream>
using namespace std;
int main(){ 
    int num=0;
    cout<<"Escriba un numero entero por favor: \n";
    cin>>num;

    int *puntero= &num;
    cout<<"El numero que usted escribio es: "<<*puntero;

    return 0;
}