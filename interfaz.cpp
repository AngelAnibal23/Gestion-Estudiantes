#include "funciones.h"
//#include "biblioteca.h"
#include <iostream>
#include <cstdlib>
#include <string>
/*
int cantidad_de_usuarios = 0; 
int cantidad_de_administradores=0;
Registro_usuario registrar_usuario[30]; 
Registro_Administrador registrar_administrador[30];
*/

using namespace std;       

void Menu_Principal() {
    int resp;   // Variable para almacenar la respuesta del usuario
	
    do {
        // Llama a la función Logo para mostrar el logotipo 
        cout << "\t\t\t\t\t\t\t__________________ELIGA SU CARGO_________________" << endl;
        cout << "\t\t\t\t\t\t\t|\t\t                  \t\t|";
        cout << endl << "\t\t\t\t\t\t\t|\t\t1.- Docente.\t\t|" << endl; 
        cout << "\t\t\t\t\t\t\t|\t\t                  \t\t|";
        cout << endl << "\t\t\t\t\t\t\t|\t\t2.- Estudiante.\t\t|" << endl; 
        cout << "\t\t\t\t\t\t\t|\t\t                  \t\t|";
        cout << endl << "\t\t\t\t\t\t\t|\t\t0.- Salir.        \t\t|" << endl; 
        cout << "\t\t\t\t\t\t\t|\t\t                  \t\t|";
        cout << endl << "\t\t\t\t\t\t\t|_______________________________________________|" << endl; // Línea final del menú
        cout << endl << "\t\t\t\t\t\t\t\t \tIngrese la respuesta: "; cin >> resp;
		system("cls");
        //valida(resp); // Llama a la funcion valida para obtener una opción válida del usuario

         // Limpia la pantalla

        if (resp == 1) { // Si el usuario elige la opción 1
            Menu_Docente(); // Llama a la funcion Menu_Usuario para mostrar el menu de usuario libre
        } else if (resp == 2) { // Si el usuario elige la opción 2
            Menu_Estudiante(); // Llama a la funcion Menu_Administrador para mostrar el menu de administrador
        }
    } while (resp != 0); // Repite el menú hasta que el usuario elija salir (opción 0)
    //system("PAUSE"); 
    //system("cls");
}

void Menu_Docente() {
    int resp;  // Variable para almacenar la respuesta del usuario
	
    do {

        // Muestra el menú de administrador
        cout << "\t\t\t\t\t\t__________________DOCENTE__________________________" << endl;
        cout << "\t\t\t\t\t\t|\t\t                                 \t\t|";
        cout << endl << "\t\t\t\t\t\t|\t\t1.- Ingresar notas.                 \t\t|" << endl; 
        cout << "\t\t\t\t\t\t|\t\t                                 \t\t|"; 
        cout << endl << "\t\t\t\t\t\t|\t\t2.- Editar notas.		   \t\t|" << endl; 
        cout << "\t\t\t\t\t\t|\t\t                                 \t\t|"; 
        cout << endl << "\t\t\t\t\t\t|\t\t3.- Ordenar nota		  .\t\t|" << endl; 
        cout << "\t\t\t\t\t\t|\t\t                                 \t\t|"; 
        cout << endl << "\t\t\t\t\t\t|\t\t4.- Buscar estudiante.   \t\t|" << endl;
        cout << "\t\t\t\t\t\t|\t\t                                 \t\t|"; 
        cout << endl << "\t\t\t\t\t\t|\t\t5.- Visualizar cursos.   \t\t|" << endl; 
        cout << "\t\t\t\t\t\t|\t\t                                 \t\t|"; 
        cout << endl << "\t\t\t\t\t\t|\t\t0.- Volver al menu principal.    \t\t|" << endl;
        cout << "\t\t\t\t\t\t|\t\t                                 \t\t|"; 
        cout << endl << "\t\t\t\t\t\t|_______________________________________________________________|" << endl; 
        cout << endl << "\t\t\t\t\t\t\t \tIngrese la respuesta: ";  cin>>resp;

       // valida(resp); // Valida la entrada del usuario

        system("cls"); // Limpia la pantalla

        // Maneja la opcion seleccionada por el usuario
        if (resp == 1) {
         //   Registrar_admin(registrar_administrador, cantidad_de_administradores); // Redirige a una funcion para registrar un nuevo administrador
        }
        if (resp == 2) {
           // Mostrar_registros(registrar_administrador, registrar_usuario,cantidad_de_administradores,cantidad_de_usuarios); // Muestra los usuarios y administradores registrados
        }
        if (resp == 3) {
            //AgregarL(); // Llama a la funcion para agregar un libro
        }
        if (resp == 4) {
         //   QuitarL(); // Llama a la funcion para quitar libros
        }
        if (resp == 5) {
           // mostrar_prestamos_activos_admin(cantidad_de_usuarios, registrar_usuario); // Muestra los prestamos activos
        }

    } while (resp != 0); // Repite el menu hasta que el usuario elija salir (opcion 0)

    
    system("cls"); // Limpia la pantalla antes de volver al menu principal
}


//INGRESA AL MENU DE USUARIO	 
void Menu_Estudiante() {
    int resp; // Variable para almacenar la respuesta del usuario
  //  int retiene = 0; // Variable para verificar si el usuario ya está registrado

    do {

        //Logo(); // Llamada a la función Logo para mostrar el logotipo
        cout << "\t\t\t\t\t\t__________________ESTUDIANTE_________________________" << endl;
        cout << "\t\t\t\t\t\t|\t\t                           			   \t\t|";
        cout << endl << "\t\t\t\t\t\t|\t\t1.- Notas.             		   \t\t|" << endl;
        cout << "\t\t\t\t\t\t|\t\t                              		   \t\t|";
        cout << endl << "\t\t\t\t\t\t|\t\t2.- Mostrar notas.      		   \t\t|" << endl;
        cout << "\t\t\t\t\t\t|\t\t                             			   \t\t|";
        cout << endl << "\t\t\t\t\t\t|\t\t3.- Mostrar restante residuo.    \t\t|" << endl;
        cout << "\t\t\t\t\t\t|\t\t                            			   \t\t|";
        cout << endl << "\t\t\t\t\t\t|\t\t0.- Volver al menu principal.	   \t\t|" << endl;
        cout << "\t\t\t\t\t\t|\t\t                            			   \t\t|";
        cout << endl << "\t\t\t\t\t\t|_________________________________________|" << endl;
        cout << endl << "\t\t\t\t\t\t\t \tIngrese la respuesta: "; cin >> resp;
        //valida(resp); // Llamada a la funcion valida para obtener una respuesta válida del usuario
		 
        if (resp == 1) { // Si el usuario elige la opción 1
        /*
            if (retiene == 1) { // Verifica si ya está registrado
                cout << "\t\t\t\t\t\tYa se encuentra registrado.";
                system("PAUSE"); // Pausa el sistema para que el usuario pueda ver el mensaje
            }
        */
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
    } while (resp != 0); // Repite el menu hasta que el usuario elija salir (opción 0)
    
    system("cls"); // Limpia la pantalla antes de salir
}


