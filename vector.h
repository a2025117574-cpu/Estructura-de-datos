#pragma once

class vector
{
private:
	int vec[20], n; // Aumentado a 20 para soportar la suma de n + m
public:
	vector(void); 
	~vector(void); 

	void cargarVector(int vec[], int n); 
	void mostrarVector(int vec[], int n);
	void ordenarVector(int vec[], int n);
    // NUEVO MÉTODO
	void concatenarVector(int v1[], int n, int v2[], int m, int resultado[]);
};
