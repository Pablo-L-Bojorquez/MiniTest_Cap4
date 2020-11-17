#include <iostream>
#include "constants.h"

double operacion(int tiempo, int alt )
{
	return alt - (grav * (tiempo * tiempo)/2);
}
	int altura = 0;
int main ()
{
	std::cout<<"Ingrese la Altura de la Torre (M): \n";
	std::cin>>altura;
	if (altura <= 0) std::cout<<"La Altura debe ser Mayor a 0.. Intentelo Nuevamente.";
	else{
		std::cout<<"Altura en el Segundo: 0.- " << operacion(0, altura)<<'\n';
		std::cout<<"Altura en el Segundo: 1.- " << operacion(1, altura)<<'\n';
		std::cout<<"Altura en el Segundo: 2.- " << operacion(2, altura)<<'\n';
		std::cout<<"Altura en el Segundo: 3.- " << operacion(3, altura)<<'\n';
		std::cout<<"Altura en el Segundo: 4.- " << operacion(4, altura)<<'\n';
		std::cout<<"Altura en el Segundo: 5.- " << operacion(5, altura)<<'\n';
	}
	return 0;
}
