#include "funciones.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;       

void Menu_Principal() {
    int resp;   // Variable para almacenar la respuesta del usuario
	
    do {
        // MENU MOMENTANEO HASTA IMPLEMENTAR LA CLASE DE USUARIO
        cout << "\t\t\t\t\t\t\t__________________ELIGA SU CARGO_________________" << endl;
        cout << "\t\t\t\t\t\t\t|\t\t                  \t\t|";
        cout << endl << "\t\t\t\t\t\t\t|\t\t1.- Docente.\t\t|" << endl; 
        cout << "\t\t\t\t\t\t\t|\t\t                  \t\t|";
        cout << endl << "\t\t\t\t\t\t\t|\t\t2.- Estudiante.\t\t|" << endl; 
        cout << "\t\t\t\t\t\t\t|\t\t                  \t\t|";
        cout << endl << "\t\t\t\t\t\t\t|\t\t0.- Salir.        \t\t|" << endl; 
        cout << "\t\t\t\t\t\t\t|\t\t                  \t\t|";
        cout << endl << "\t\t\t\t\t\t\t|_______________________________________________|" << endl; 
        cout << endl << "\t\t\t\t\t\t\t\t \tIngrese la respuesta: "; cin >> resp;
		system("cls");

        if (resp == 1) { 
            Menu_Docente(); 
        } else if (resp == 2) { 
            Menu_Estudiante(); 
        }
    } while (resp != 0); 
    //system("PAUSE"); 
    //system("cls");
}

void Menu_Docente() {
    int resp;  
	
    do {

        // Muestra el menú de administrador
        cout << "\t\t\t\t\t\t__________________DOCENTE__________________________" << endl;
        cout << "\t\t\t\t\t\t|\t\t                                 \t\t|";
        cout << endl << "\t\t\t\t\t\t|\t\t1.- Ingresar notas.                 \t\t|" << endl; 
        cout << "\t\t\t\t\t\t|\t\t                                 \t\t|"; 
        cout << endl << "\t\t\t\t\t\t|\t\t2.- Editar notas.		   \t\t|" << endl; 
        cout << "\t\t\t\t\t\t|\t\t                                 \t\t|"; 
        cout << endl << "\t\t\t\t\t\t|\t\t3.- Mostrar notas registradas.\t\t|" << endl; 
        cout << "\t\t\t\t\t\t|\t\t                                 \t\t|"; 
        cout << endl << "\t\t\t\t\t\t|\t\t4.-   \t\t|" << endl;
        cout << "\t\t\t\t\t\t|\t\t                                 \t\t|"; 
        cout << endl << "\t\t\t\t\t\t|\t\t5.- .   \t\t|" << endl; 
        cout << "\t\t\t\t\t\t|\t\t                                 \t\t|"; 
        cout << endl << "\t\t\t\t\t\t|\t\t0.- Volver al menu principal.    \t\t|" << endl;
        cout << "\t\t\t\t\t\t|\t\t                                 \t\t|"; 
        cout << endl << "\t\t\t\t\t\t|_______________________________________________________________|" << endl; 
        cout << endl << "\t\t\t\t\t\t\t \tIngrese la respuesta: ";  cin>>resp;

        system("cls"); // Limpia la pantalla

        // Maneja la opcion seleccionada por el usuario
        if (resp == 1) {
        }
        if (resp == 2) {
        }
        if (resp == 3) {
            
        }
        if (resp == 4) {
        }
        if (resp == 5) {
        }

    } while (resp != 0); // Repite el menu hasta que el usuario elija salir (opcion 0)

    
    system("cls"); 
}
	 
void Menu_Estudiante() {
    int resp; 

    do {
        cout << "\t\t\t\t\t\t__________________ESTUDIANTE_________________________" << endl;
        cout << "\t\t\t\t\t\t|\t\t                           			   \t\t|";
        cout << endl << "\t\t\t\t\t\t|\t\t1.- Listado de calificaciones.   \t\t|" << endl;
        cout << "\t\t\t\t\t\t|\t\t                              		   \t\t|";
        cout << endl << "\t\t\t\t\t\t|\t\t2.- .      		   \t\t|" << endl;
        cout << "\t\t\t\t\t\t|\t\t                             			   \t\t|";
        cout << endl << "\t\t\t\t\t\t|\t\t3.-    \t\t|" << endl;
        cout << "\t\t\t\t\t\t|\t\t                            			   \t\t|";
        cout << endl << "\t\t\t\t\t\t|\t\t0.- Volver al menu principal.	   \t\t|" << endl;
        cout << "\t\t\t\t\t\t|\t\t                            			   \t\t|";
        cout << endl << "\t\t\t\t\t\t|_________________________________________|" << endl;
        cout << endl << "\t\t\t\t\t\t\t \tIngrese la respuesta: "; cin >> resp;
		 
        if (resp == 1) { 
        }

        system("cls"); // Limpia la pantalla
		
/*
        if (resp == 1) { // Si el usuario elige registrarse y no esta registrado
            if (retiene == 0) {
                Registrar_usuario(registrar_usuario, cantidad_de_usuarios); // Llama a la funcion para registrar al usuario
                retiene = 1; // Marca que el usuario ya está registrado
            } else {
                // No hace nada si ya esta registrado
            }
        }

        if (resp == 2) { // Si el usuario elige mostrar el inventario
            Menu_Mostrar(); // Llama a la funcion para mostrar el inventario
            system("cls"); // Limpia la pantalla
        }

        if (resp == 3) { // Si el usuario elige prestarse un libro
            if (retiene == 0) { // Verifica si el usuario no esta registrado
                Logo();
                cout << "\t\t\t\t\t\tDebe registrarse antes.";
                system("PAUSE"); // Pausa el sistema para que el usuario pueda ver el mensaje
                system("cls"); // Limpia la pantalla
            } else {
                menuPrestamos(libros); // Llama a la funcion para gestionar los préstamos de libros
            }
        }

        if (resp == 0) { // Si el usuario elige volver al menu principal
            retiene = 0; // Resetea la variable de retencion
        }
        */
    } while (resp != 0); 
    
    system("cls"); 
}


