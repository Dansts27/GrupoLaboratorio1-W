#include <iostream>

struct DatosUsuario {
    float calorias;
    float cant;
};

DatosUsuario usuario;

void QuemarCalorias(float *x, float y);

int main () {
    
    usuario.calorias = 2000;
    
    return 0;
}

void QuemarCalorias(float *x, float y)
{
    std::cout << "Calorias quemadas: ";
    std::cin >> y;
    
    if(y > 0 && y <= *x){

        *x -= y;

        std::cout << "\n--Operacion realizada exitosamente";
    }
    else
    {
        std::cout << "\n--*ERROR: el valor ingresado no es valido*";
    }
}