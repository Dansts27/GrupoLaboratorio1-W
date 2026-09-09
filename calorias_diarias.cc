#include <iostream>

//variables
float calorias_totales = 2000;
float cant;

//Puntero
float *pCalorias = &calorias_totales;

//Funciones
void ConsultarCalorias (float x);
void AgregarCalorias (float &x, float y);

int main () {

    return 0;
}

void ConsultarCalorias (float x) {
std::cout<<"\nCalorias totales: " <<x;
}

void AgregarCalorias (float &x, float y) {
std::cout<<"\nCalorias a agregar: ";
std::cin>>y;
if (y>=0) {
x += y;
std::cout<<"\nOperacion realizada con exito.";
}
else {
    std::cout<<"ERROR.\nLa cantidad ingresada no es valida.";
}  
}