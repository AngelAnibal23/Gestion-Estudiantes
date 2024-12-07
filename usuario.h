#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
#include <map>
#include "nota.h"

using namespace std;

class Usuario{
	protected:
		string nombre;
		string codigo;
		string dni;
	
	public:
		Usuario(string nombre, string codigo, string dni);
		string getNombre();
		string getCodigo();
		bool verificarCredenciales(string codigo, string dni);
		
};


#endif