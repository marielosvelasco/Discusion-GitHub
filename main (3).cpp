#include <iostream>
using namespace std;

void solicitar(int *p, int ROWS, int COLS){
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "[" << i << "][" << j << "]: ";
            cin >> *(p+i*COLS+j);
        }
    }
}

void sumar(int *a, int *c, int ROWS, int COLS){
  for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            *(c+i*COLS+j) = *(a+i*COLS+j) ;
        }
   }
}

void mostrar(int *p, int ROWS, int COLS){
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "[" << i << "][" << j << "]: ";
            cout << *(p+i*COLS+j) << endl;
        }
    }
}

int main(){
    int filas = 3, columnas = 3;
    
    // Crear y poblar matriz 
    cout << "Crear y poblar matriz " << endl;
    int a[filas][columnas];
    solicitar(*a, filas, columnas);
    

    
    // Sumar y almacenar 
    int c[filas][columnas];
    sumar(*a,  *c, filas, columnas);
    
    // Mostrar resultado
    cout << "Mostrar resultado" << endl;
    mostrar(*c, filas, columnas);
}

