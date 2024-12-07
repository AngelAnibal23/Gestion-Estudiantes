#ifndef CURSO_H
#define CURSO_H

#include <iostream>
#include "usuario.h"
using namespace std;

class Nota {
private:
    string nombre; 
	string codigo;
	vector<Estudiante*> estudiantes;  

public:
  	Curso(string nombre, string codigo);
	string getNombre();
	string getCodigo();
	vector<Estudiante*> getEstudiantes();
};

#endif