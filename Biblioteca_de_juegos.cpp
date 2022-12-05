
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
void ShowAllGames (Game *);
void ShowGame (Game *);
void SearchGame (Game *, string);


int main() {
	Game *GameLibrary = NULL; 		//Declaracion de la lista
	int Rating, option; 			//Declaracion de variables
	string GameName, ReleaseDate, Platforms, Genre, Developer;

	cout << "Introduzca el nombre del juego: ";
	getline(cin, GameName);
	cout << "Introduzca la fecha de lanzamiento (DD/MM/AAAA): ";
	getline(cin, ReleaseDate);
	cout << "Introduzca la valoracion 0/10: ";
	cin >> Rating;
	cin.ignore();
	cout << "Introduzca las plataformas: ";
	getline(cin, Platforms);
	cout << "Introduzca el genero: ";
	getline(cin, Genre);
	cout << "Introduzca el desarrollador: ";
	getline(cin, Developer);

	addGame(GameLibrary, GameName, ReleaseDate, Rating, Platforms, Genre, Developer);
	ShowAllGames(GameLibrary);

	cout << "Introduzca el nombre del juego a buscar: ";
	getline(cin, GameName);
	SearchGame(GameLibrary, GameName);

	return 0;
}

void addGame (Game *& GameLibrary, string GameName, string ReleaseDate, int Rating, string Platforms, string Genre, string Developer) {
	Game *NewGame = new Game();
	NewGame -> GameName = GameName;
	NewGame -> ReleaseDate = ReleaseDate;
	NewGame -> Rating = Rating;
	NewGame -> Platforms = Platforms;
	NewGame -> Genre = Genre;
	NewGame -> Developer = Developer;

	Game *aux1 = GameLibrary;

	GameLibrary = NewGame;
	NewGame -> siguiente = aux1;

	cout << "\nEl juego se agrego correctamente a la biblioteca de juegos" << endl;
}

void ShowAllGames (Game *GameLibrary){
	int i = 1;
	Game *Position = new Game();
	Position = GameLibrary;

	while (Position != NULL) {
		cout<< i << "._ " << Position -> GameName<<endl;
		Position = Position -> siguiente;
		i++;
	}

}

//void para buscar y mostrar los elementos de la lista

void SearchGame (Game *GameLibrary, string GameName) {
 	Game *Position = new Game();
 	Position = GameLibrary;
	bool found = false;

	while (Position != NULL) {
		if (Position -> GameName == GameName){
			found = true;
			ShowGame(Position);
		} 
		Position = Position -> siguiente;
	}

	if (found == false ){
		cout<< "El Juego "<<GameName<<" no se encontro en la biblioteca. \n";
	}

}

void ShowGame (Game *Position){
	cout << "Nombre del juego: " << Position -> GameName << endl;
	cout << "Fecha de lanzamiento: " << Position -> ReleaseDate << endl;
	cout << "Valoracion: " << Position -> Rating << endl;
	cout << "Plataformas: " << Position -> Platforms << endl;
	cout << "Genero: " << Position -> Genre << endl;
	cout << "Desarrollador: " << Position -> Developer << endl;
}


