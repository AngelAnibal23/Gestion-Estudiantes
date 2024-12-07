#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include <vector>
#include <map>
#include "usuario.h"

using namespace std;

class Estudiante : public Usuario{
	private:
    	map<string, vector<double>> notasPorCurso;
	public:
		Estudiante();
		void agregarNota(string curso, vector<double> notas);
		vector <double> getNotasPorCurso(string curso);
		void mostrarNotas();
};

#endif