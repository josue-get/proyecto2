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

	/*for (int i = 0; i < 79; i = i + 79) {

		if (i == 0) {


			gotoxy(i, 0); cout << "╔";
			gotoxy(i, 24);  cout << "╚";

		}
		else {

			gotoxy(i, 0); cout << "╗";
			gotoxy(i, 24);  cout << "╝";
		}

	}
	for (int i = 1; i < 79; i++) {

		gotoxy(i, 0); cout << "­═­";
		gotoxy(i, 24); cout << "═";

	}
	for (int i = 1; i < 24; i++) {

		gotoxy(79, i); cout << "║";
		gotoxy(0, i); cout << "║";

	}
	*/



void leer() {

    ifstream archivo("libro1.csv", ios::in);
    

    

        string registro;


        getline(archivo, registro);

        while (getline(archivo, registro)) {

           // cout << registro << endl;











        }

        archivo.close();
    


}








int main()
{
	crearmarco();
    

}
