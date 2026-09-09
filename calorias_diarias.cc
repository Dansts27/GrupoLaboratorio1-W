#include <iostream>

//Struct del usuario
struct DatosUsuario {
    float calorias;
    float cant = 0;
};

//Puntero
//float *pCalorias = &calorias;

//Funciones
void ConsultarCalorias (float x);
void AgregarCalorias (float &x, float y);
void QuemarCalorias(float *x, float y);

DatosUsuario usuario;

int main () {
    
    usuario.calorias = 2000;

    ConsultarCalorias(usuario.calorias);

    AgregarCalorias(usuario.calorias, usuario.cant);

    ConsultarCalorias(usuario.calorias);

    QuemarCalorias(&usuario.calorias, usuario.cant);

    ConsultarCalorias(usuario.calorias);
    
    return 0;
}

void ConsultarCalorias (float x) {
std::cout<<"\nCalorias totales: " <<x;
}

void AgregarCalorias (float &x, float y){
std::cout<<"\nCalorias a agregar: ";
std::cin>>y;
if (y>=0) {
x += y;
std::cout<<"\n--Operacion realizada exitosamente.";
}
else {
    std::cout<<"\n--ERROR: la cantidad ingresada no es valida.";
}
}

void QuemarCalorias(float *x, float y)
{
    std::cout << "\nCalorias quemadas: ";
    std::cin >> y;
    
    if(y > 0 && y <= *x){

        *x -= y;

        std::cout << "\n--Operacion realizada exitosamente.";
    }
    else
    {
        std::cout << "\n--ERROR: la cantidad ingresada no es valida.";
    }
}