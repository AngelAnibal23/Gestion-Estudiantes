#ifndef DOCENTE_H
#define DOCENTE_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "nota.h"
#include "usuario.h"
using namespace std;

class Docente : public Usuario{
	private:
		vector<string> cursos;
		string claveSeguridad;
	public:
		Docente();
		void agregarCurso(string curso);
		vector<string> getCursos();
		void ingresarNotas(map<string, Estudiante>&estudiantes, string curso);
		void editarNotas(map<string, Estudiante>& estudiantes, string curso, string claveSeguridad);
};

#endif