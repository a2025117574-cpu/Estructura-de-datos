#pragma once
class Triangulo
{

  private:
	  float base; 
	  float altura; 

  public: 
	  Triangulo(); //constructor
	  ~Triangulo(); //destructor

	  //polimorfismo

	  float calculararea(float b, float h); 
	  float calculararea(); 

};

