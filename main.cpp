/*	
*	Tarea grupal del curso Programación I
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autores:
*	Josseline Adriana Catalán Juárez
*	José David Mazariegos Ortega
*	Mynor Alexander Gómez Pedro
*	Erick Manuel Fuentes Miranda
*	Francisco Antonio De León Natareno
*/
#include "programas/mynor/programa4.cpp"
#include "programas/erick/programa1.cpp"
#include "programas/josseline/programa2.cpp"
#include "programas/erick/programa3.cpp"
#include "programas/erick/programa5.cpp"
#include "programas/erick/programa6.cpp"
#include "programas/josseline/programa7.cpp"
#include "programas/josseline/programa8.cpp"
#include "programas/josseline/programa9.cpp"
#include "programas/mynor/programa10.cpp"
#include "programas/david/programa11.cpp"
#include "programas/david/programa12.cpp"
#include "programas/mynor/programa13.cpp"
#include "programas/david/programa14.cpp"
#include "programas/mynor/programa15.cpp"
#include "programas/david/programa16.cpp"
#include "programas/francisco/programa17.cpp"
#include "programas/francisco/programa18.cpp"
#include "programas/francisco/programa19.cpp"
#include "programas/francisco/programa20.cpp"
#include <iostream>
#include "windows.h" // Para poder imprimir tildes o caracteres especiales

using namespace std;
int main() {
	SetConsoleOutputCP(65001); // Establece el CodePage en caracteres UTF-8
	string valor;
    int opcion; // Variable para registrar la opción elegida del menú
    
    do {
    	printf("========================================== \n");
		printf("| \t --- MENU PRINCIPAL --- \t | \n");
		printf("========================================== \n");
		printf("1  - Programa 1 \n2  - Programa 2 \n3  - Programa 3 \n4  - Programa 4 \n5  - Programa 5 \n");
		printf("6  - Programa 6 \n7  - Programa 7 \n8  - Programa 8 \n9  - Programa 9 \n10 - Programa 10 \n");
		printf("11 - Programa 11 \n12 - Programa 12 \n13 - Programa 13 \n14 - Programa 14 \n15 - Programa 15 \n");
		printf("16 - Programa 16 \n17 - Programa 17 \n18 - Programa 18 \n19 - Programa 19 \n20 - Programa 20 \n");
		printf("21 - SALIR \n");
		printf("****************************************** \n\n");

        cout << "Selecciona una opción: ";
        cin >> opcion; // Recibir el valor ingresado por el usuario
        cout << endl;
        
        // Si el usuario ingresa un valor no numérico,
	    if (cin.fail()) {
	        cin.clear(); // limpiar el indicador de error
	        cin.ignore(1000, '\n'); // ignorar los valores erróneos
	    }
        
        // Switch-Case para ejecutar los programas según la opción elegida
        switch (opcion) {
            case 1:
                cout << "Suma, Resta, Multiplicación y División de dos números" << endl;
                // Agregar funcionalidad del programa1
                //programaUno();
                break;
            case 2:
                system("cls"); // Limpia la consola (solo en Windows)
                // Agregar funcionalidad del programa2
                programaDos();
                break;
            case 3:
                cout << "Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos" << endl;
                // Agregar funcionalidad del programa3
                //programaTres();
                break;
            case 4:
	            system("cls"); // Limpia la consola (solo en Windows)
	            // Agregar funcionalidad del programa4
	            programaCuatro(); // Llamada al programa 4
            	break;
            case 5:
                cout << "Conversión de números arábigos a romanos" << endl;
                // Agregar funcionalidad del programa5
                //programaCinco();
                break;
            case 6:
                cout << "Conversión de números enteros a letras" << endl;
                // Agregar funcionalidad del programa6
                //programaSeis();
                break;
        	case 7:
                system("cls"); // Limpia la consola (solo en Windows)
                // Agregar funcionalidad del programa7
                programaSiete();
                break;
            case 8:
                system("cls"); // Limpia la consola (solo en Windows)
                // Agregar funcionalidad del programa8
                programaOcho();
                break;
            case 9:
                system("cls"); // Limpia la consola (solo en Windows)
                // Agregar funcionalidad del programa9
                programaNueve();
                break;
            case 10: 
                system("cls"); // Limpia la consola (solo en Windows)
                // Agregar funcionalidad del programa10
                programaDiez();
                break;
            case 11:
            	system("cls"); // Limpia la consola (solo en Windows)
                // Agregar funcionalidad del programa11
                programaOnce();
                break;
            case 12:
            	system("cls"); // Limpia la consola (solo en Windows)
                // Agregar funcionalidad del programa12
                programaDoce();
                break;
            case 13:
                cout << "Crear figuras geométricas básicas" << endl;
                // Agregar funcionalidad del programa13
                programaTrece();
                break;
            case 14:
                system("cls"); // Limpia la consola (solo en Windows)
                // Agregar funcionalidad del programa14
                programaCatorce();
                break;
            case 15:
                system("cls"); // Limpia la consola (solo en Windows)
                // Agregar funcionalidad del programa15
                programaQuince();
                
                break;
            case 16:
                system("cls"); // Limpia la consola (solo en Windows)
                // Agregar funcionalidad del programa16
                programaDieciseis();
                break;
            case 17:
                system("cls"); // Limpia la consola (solo en Windows)
                // Agregar funcionalidad del programa17
                programaDiecisiete();
                break;
            case 18:
                system("cls");
                // Agregar funcionalidad del programa18
                programaDieciocho();
                break;
            case 19:
                system("cls"); // Limpia la consola (solo en Windows)
                // Agregar funcionalidad del programa19
                programaDiecinueve();
                break;
            case 20:
                system("cls"); // Limpia la consola (solo en Windows)
                // Agregar funcionalidad del programa20
                programaVeinte();
                break;
            case 21:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "OPCION NO VALIDA. Por favor, selecciona una opción del menú!" << endl;
                break;
        }
        cout << endl;
    } while (opcion != 21);
    
    return 0;
}
