#include <iostream>
#include <string.h>

void getText()
{
	std::cout<< "El resultado de la Operacion: ";
}

double num1, num2;
char op[1];
int main()
{
	std::cout<<"Ingrese 2 Numeros de Punto Flotante \n";
	std::cin>>num1;
	std::cin>>num2;
	std::cout<<"Seleccione la Operacion a Realizar \n";
	std::cout<<"+, -, *, / \n";
	std::cin>>op;
	
	if (strcmp(op, "+")==0) {
		getText();
		std::cout<< num1 << " + " << num2 <<" es: "<< num1 + num2;
	} 
	else if (strcmp(op, "-")==0){
		getText();
		std::cout<< num1 << " - " << num2 <<" es: "<< num1 - num2;
	}
	else if (strcmp(op, "*")==0){ 
	getText();
	std::cout<< num1 << " * " << num2 <<" es: "<< num1 * num2;
	}
	else if (strcmp(op, "/")==0){
	getText();
	std::cout<< num1 << " / " << num2 << " es: " << num1 / num2;
	}
	else std::cout<<"Ingrese un Opcion Valida... e Intentelo Nuevamente.";
	return 0;
}

