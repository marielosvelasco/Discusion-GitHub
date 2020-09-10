/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void solicitar(int b[], int espacio){
    for(int i = 0; i < espacio; i++){
		cout << "Digite un numero: ";
		cin >> b[i];
	}
}

float media(int b[], int espacio){
    float suma = 0;
    for (int i = 0; i < espacio; i++)
        suma += b[i];
    return suma / espacio;
}



int main(){
    // Declarando variables
	int elementos = 5, numeros[elementos];
	float promedio = 0;
	
	// Solicitar valores al usuario
	solicitar(numeros, elementos);
	
	// Calcular el promedio
	promedio = media(numeros, elementos);
	cout << "Promedio: " << promedio << endl;
	
	if ( promedio < 6){
	cout << "reprobo" << endl;
	}else {
	cout << "aprobo" <<endl; 
	}
	

}

