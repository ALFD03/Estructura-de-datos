
// Biblioteca de juego con listas

#include <iostream> //Librerias
#include <string>
using namespace std;

struct Juego {

string NombreJuego ;
string FechaLanzamiento ;
int Valoracion;
string Plataformas ;
string Genero ;
string Desarrollador ;

Juego *siguiente;
};

void addJuego (Juego *&, string, string, int, string, string, string);


int main() {
	Juego *BibliotecaDeJuegos = NULL;
	int Valoracion;
	string NombreJuego , FechaLanzamiento , Plataformas , Genero , Desarrollador ;

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
	
	return 0;
}

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



