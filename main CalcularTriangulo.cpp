#include <iostream>
#include "Triangulo.h" //declarar la clase 
using namespace std; 

int main()
{
	float base, altura; 
	Triangulo triangulito; //crea el objeto de la lcase
	cout << "ingresar la base: ";
	cin >> base; 

	cout << "ingresar la altura: "; 
	cin >> altura; 

	cout << "el area es:_ " << triangulito.calculararea(base, altura); 
	cout << "el area es:_ " << triangulito.calculararea();
	return 0; 
}
