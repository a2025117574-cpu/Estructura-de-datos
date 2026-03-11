#include "Triangulo.h"

Triangulo::Triangulo() {//constructor
	base = 4;
	altura = 5; 
}

Triangulo::~Triangulo() { //destructor
}

float Triangulo::calculararea(float b, float h) {
	return (b * h) / 2;
}

float Triangulo::calculararea() {
	return (base * altura)/2 ; 
}


