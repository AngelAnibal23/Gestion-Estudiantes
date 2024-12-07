#ifndef REGISTRONOTAS_H
#define REGISTRONOTAS_H

#include <string>
#include <vector>
#include <map>
#include "nota.h" 

using namespace std;

class RegistroNotas{
	private: 
		map<string, map<string, Nota>> notasPorCurso;
	public: 
		void registrarNota(const string& curso, const string& estudiante, const Nota& nota); 
		Nota obtenerNota(const string& curso, const string& estudiante);
		void editarNota(const string& curso, const string& estudiante, const Nota& nuevaNota, const string& claveSeguridad, const string& claveCorrecta);
		void mostrarNotasPorCurso(const string& curso); 
};

#endif