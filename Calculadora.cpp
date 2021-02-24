#include <iostream>

//Definir namespace
using namespace std;

//Definir clases
class Calculadora{
	// Se definen los métodos publicos
	public:
		int Calcular (int,char,int);
};


int main(){
	//Definir Variables
	char operacion;
	int num1, num2, resultado;
	Calculadora objCalculadora;
	
	//Solicitud de valores
	
	cout <<"Ingrese los volores por ejemplo (1 +1)" << endl;
	cin >> num1 >> operacion >> num2;
	
	//Se retorno el resultado de la operación del objeto
	resultado = objCalculadora.Calcular(num1,operacion,num2);
	cout<<"El resultado es: " << resultado << endl;
}

//Definir el método publico de la clase
int Calculadora:: Calcular(int intNumero1,char charOperador,int intNumero2){
	switch(charOperador){
		case '+':
			return intNumero1 + intNumero2;
		case '-':
			return intNumero1 - intNumero2;
		case '*':
			return intNumero1 * intNumero2;	
		case '/':
			return intNumero1 / intNumero2;
		default:
			return 0;
	}
}