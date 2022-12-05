# Biblioteca de Juegos
----

## Campos

* NombreJuego.
* FechaLanzamiento.
* Valoracion.
* Plataformas.
* Genero.
* Desarrollador.

## Funciones del programa

* AddGame.
* SearchGame.
* ModifyGame.
* DeleteGame.
* ShowGame.

-----

## Codigo

### Librerias

```c++

#include <iostream>
#include <string>
using namespace std;

```

### Struct

```c++

struct Juego {
    string NombreJuego ;
    string FechaLanzamiento ;
    int Valoracion;
    string Plataformas ;
    string Genero ;
    string Desarrollador ;
Juego *siguiente;
};

```

### Prototipo de Funciones

```c++

void addJuego (Juego *&, string, string, int, string, string, string);

```

### Menu

```c++

int main(){

Juego *BibliotecaDeJuegos = NULL;
int Valoracion;
string NombreJuego , FechaLanzamiento , Plataformas , Genero , Desarrollador ;

int option; //Declaracion de variables

 	//-------------------------Menu-------------------------
	cout << "-----Welcome to the game library-----" << endl;
	cout << "1. Add a game" << endl;
	cout << "2. Search a game" << endl;
	cout << "3. Edit a game" << endl;
	cout << "4. Delete a game" << endl;
	cout << "5. Show game" << endl;
	cout << "6. Exit" << endl;
	
	cout << "\n\nChoose an option: "; cin >> option;

	switch (option) {
		case 1:
			cout << "You chose option 1" << endl;
			break;
		case 2:
			cout << "You chose option 2" << endl;
			break;
		case 3:
			cout << "You chose option 3" << endl;
			break;
		case 4:
			cout << "You chose option 4" << endl;
			break;
		case 5:
			cout << "You chose option 5" << endl;
			break;
		case 6:
			cout << "You chose option 6" << endl;
			break;
		default:
			cout << "Invalid option" << endl;
			break;
	
	}
    
return 0;
}
```

## Switch

### Case 1

```c++

    cout << "Introduzca el nombre del juego: ";
	getline(cin, NombreJuego);
	cout << "Introduzca la fecha de lanzamiento: ";
	getline(cin, FechaLanzamiento);
	cout << "Introduzca la valoracion: ";
	cin >> Valoracion;
	cin.ignore();
	cout << "Introduzca las plataformas: ";
	getline(cin, Plataformas);
	cout << "Introduzca el genero: ";
	getline(cin, Genero);
	cout << "Introduzca el desarrollador: ";
	getline(cin, Desarrollador);

	addJuego(BibliotecaDeJuegos, NombreJuego, FechaLanzamiento, Valoracion, Plataformas, Genero, Desarrollador);

```

## Funciones del programa

### AddGame

```c++

void addJuego (Juego *& BibliotecaDeJuegos, string NombreJuego, string FechaLanzamiento, int Valoracion, string Plataformas, string Genero, string Desarrollador) {
	Juego *nuevoJuego = new Juego();
	nuevoJuego -> NombreJuego = NombreJuego;
	nuevoJuego -> FechaLanzamiento = FechaLanzamiento;
	nuevoJuego -> Valoracion = Valoracion;
	nuevoJuego -> Plataformas = Plataformas;
	nuevoJuego -> Genero = Genero;
	nuevoJuego -> Desarrollador = Desarrollador;

	Juego *aux1 = BibliotecaDeJuegos;
	Juego *aux2;

	nuevoJuego -> siguiente = aux1;

	cout << "El juego se agrego correctamente a la biblioteca de juegos" << endl;


}

```

