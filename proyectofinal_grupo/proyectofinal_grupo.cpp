// proyectofinal_grupo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;
void gotoxy(int x, int y) {
    SetConsoleOutputCP(CP_UTF8);
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

class cosomacho {
     
private:

    string nombre1;
    string nombre2;
    string apellido1;
    string apellido2;
    int edad;
    int id;

public:




};






void crearmarco() {

	SetConsoleOutputCP(CP_UTF8);

    
        int ancho = 80;
        int alto = 24;

        // Dibujar la parte superior del marco
        gotoxy(0, 0);
        cout << "╔";
        for (int i = 1; i < ancho - 1; i++) {
            cout<<"═";
        }
        cout << "╗";

        // Dibujar los lados del marco
        for (int i = 1; i < alto - 1; i++) {
            gotoxy(0, i);
            cout << "║";
            gotoxy(ancho - 1, i);
            cout << "║";
        }

        // Dibujar la parte inferior del marco
        gotoxy(0, alto - 1);
        cout << "╚";
        for (int i = 1; i < ancho - 1; i++) {
            cout << "═";
        }
        cout << "╝";
    }

	


void leer() {

    ifstream archivo("libro1.csv", ios::in);
    

    

        string registro;
        string idh, nombre1h, nombre2h, apellido1h, apellido2h;

        getline(archivo, registro);

        while (getline(archivo, registro)) {

            stringstream token(registro);

            getline(token, idh, ';');
            getline(token, nombre1h, ';');
            getline(token, nombre2h, ';');
            getline(token, apellido1h, ';');
            getline(token, apellido2h , ';');

            
            cout << nombre1h << endl;
            cout << idh << endl;






        }

        archivo.close();
    


}








int main()
{



	
    
    leer();








}

