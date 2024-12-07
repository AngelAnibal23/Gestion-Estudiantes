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

class Docente:public Usuario{
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

class Estudiante:public Usuario{
	private:
    	map<string, vector<double>> notasPorCurso;
	
	public:
		Estudiante();
		void agregarNota(string curso, vector<double> notas);
		vector <double> getNotasPorCurso(string curso);
		void mostrarNotas();
};

#endif