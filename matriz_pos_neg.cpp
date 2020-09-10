#include <iostream>
using namespace std;

void Datos(int *puntero, int ROWS, int COLS){
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "[" << i << "][" << j << "]";
            cout<< (puntero+i*COLS+j)<<'\n';
        }
    }
}
void DatosGuardados(int *puntero, int ROWS, int COLS){
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "[" << i << "][" << j << "] ";
            cout << (puntero+i*COLS+j) << endl;
        }
    }
}
int main(){

    int filas = 3, columnas = 3;

    cout << "Crear y poblar matrices" << endl;
    int a[filas][columnas];
    Datos(*a, filas, columnas);

    cout << "Mostrar resultado\n" << "Direccion: " << &a << endl;
    DatosGuardados(*a, filas, columnas);



}
