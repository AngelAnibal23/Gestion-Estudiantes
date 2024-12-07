#ifndef SISTEMA_H
#define SISTEMA_H

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include "usuario.h"

using namespace std; 

class Sistema{
	private: 
		vector<Docente> docentes; 
		vector<Estudiante> estudiantes; 
	public: 
		Sistema(); 
		void cargarDatos(string, string, string); 
		void guardarDatos(string, string, string); 
		void login(); 
		void perfilDocente(Docente& docente); 
		void perfilEstudiante(Estudiante& estudiante); 
};

#endif 