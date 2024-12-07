#ifndef NOTA_H
#define NOTA_H

#include <iostream>

using namespace std;

class Nota {
private:
    double notaProducto;   // Nota de Producto (ej. 0.3)
    double notaDesempeno;  // Nota de Desempeño (ej. 0.3)
    double notaConocimiento; // Nota de Conocimiento (ej. 0.4)

public:
  	Nota(double producto, double desempeno, double conocimiento);
	double calcularPromedio();

};

#endif