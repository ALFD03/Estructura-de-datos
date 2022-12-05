
// Biblioteca de juego con listas

#include <iostream> //Librerias
#include <string>
using namespace std;

struct Game {

string GameName ;
string ReleaseDate ;
int Rating;
string Platforms ;
string Genre ;
string Developer ;

Game *siguiente;
};

void addGame (Game *&, string, string, int, string, string, string);


int main() {
	Game *GameLibrary = NULL;
	int Rating;
	string GameName , ReleaseDate , Platforms , Genre , Developer ;

	cout << "Introduzca el nombre del juego: ";
	getline(cin, GameName);
	cout << "Introduzca la fecha de lanzamiento: ";
	getline(cin, ReleaseDate);
	cout << "Introduzca la valoracion: ";
	cin >> Rating;
	cin.ignore();
	cout << "Introduzca las plataformas: ";
	getline(cin, Platforms);
	cout << "Introduzca el genero: ";
	getline(cin, Genre);
	cout << "Introduzca el desarrollador: ";
	getline(cin, Developer);

	addGame(GameLibrary, GameName, ReleaseDate, Rating, Platforms, Genre, Developer);
	
	return 0;
}

void addGame (Game *& GameLibrary, string GameName, string ReleaseDate, int Rating, string Platforms, string Genre, string Developer) {
	Game *nuevoGame = new Game();
	nuevoGame -> GameName = GameName;
	nuevoGame -> ReleaseDate = ReleaseDate;
	nuevoGame -> Rating = Rating;
	nuevoGame -> Platforms = Platforms;
	nuevoGame -> Genre = Genre;
	nuevoGame -> Developer = Developer;

	Game *aux1 = GameLibrary;
	Game *aux2;

	nuevoGame -> siguiente = aux1;

	cout << "El juego se agrego correctamente a la biblioteca de juegos" << endl;


}



