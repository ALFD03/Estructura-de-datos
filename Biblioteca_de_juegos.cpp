//										//^-----	GAME LIBRARY	-----^\\										\\

// ! 		::::::::: LIBRARIES ::::::::::

#include <iostream>
#include <string>
using namespace std;

// ! 		::::::::: STRUCTURE ::::::::::

struct Game {
	string GameName ; 		//Nombre del juego
	string ReleaseDate ; 	//Fecha de lanzamiento
	float Rating; 			//Calificacion
	string Platforms ;	    //Plataformas
	string Genre ;			//Genero
	string Developer ;		//Desarrollador
	Game *next;				//Puntero al next nodo
};

// ! 		::::::::: PROTOTYPES ::::::::::

void addGame (Game *&, string, string, float, string, string, string); //Añadir juego
void ShowAllGames (Game *);											 //Mostrar todos los juegos
void ShowGame (Game *);							 					 //Mostrar un juego
void SearchGame (Game *, string);									 //Buscar un juego
void DeleteGame (Game *&, string);									 //Eliminar un juego





// $ 		::::::::: MAIN FUNCTION ::::::::::

int main() {
	Game *GameLibrary = NULL; 										//Declaracion de la lista
	float Rating, menu = true; 								        //Declaracion de variables
    int option;                                                     //Declaracion de variables
	string GameName, ReleaseDate, Platforms, Genre, Developer; 		//Declaracion de variables

	do {
		system("cls");
		//-------------------------Menu-------------------------
		cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
		cout << "\t\t1. Agregar un Juego." 		<< endl;
		cout << "\t\t2. Buscar un Juego" 			<< endl;
		cout << "\t\t3. Modificar un Juego" 		<< endl;
		cout << "\t\t4. Eliminar un Juego" 		<< endl;
		cout << "\t\t5. Ver Juegos" 				<< endl;
		cout << "\t\t6. Salir" 					<< endl;
		cout << "\n\n\t\tSeleccione una opcion: "; cin >> option;

		switch (option) {
			case 1: 	//* --> ADD A GAME
				system("cls");
				cin.ignore();
				cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
				cout << "\t\tIntroduzca el nombre del juego: ";		getline(cin, GameName);
				cout << "\t\tIntroduzca la fecha de lanzamiento (DD/MM/AAAA): "; getline(cin, ReleaseDate);
				cout << "\t\tIntroduzca la valoracion 0/10: ";		cin >> Rating;
				cin.ignore();
				cout << "\t\tIntroduzca las plataformas: "; 		getline(cin, Platforms);
				cout << "\t\tIntroduzca el genero: "; 				getline(cin, Genre);
				cout << "\t\tIntroduzca el desarrollador: "; 		getline(cin, Developer);
				addGame(GameLibrary, GameName, ReleaseDate, Rating, Platforms, Genre, Developer); //Añadir juego a la lista
				break;

			case 2: 	//* --> SEARCH A GAME
				system("cls");
				cin.ignore();
				cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
				cout << "\t\tIntroduzca el nombre del juego: ";		getline(cin, GameName);
				SearchGame(GameLibrary, GameName);
				cout << "\n\t\t" << system("pause");
				break;

			case 3:		//todo --> MODIFY A GAME
				system("cls");
				cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
				cout << "You chose option 3" << endl;
				cout << "\n\t\t" << system("pause");
				break;

			case 4:		//* --> DELETE A GAME
				system("cls");
				cin.ignore();
				cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
				cout << "\t\tIntroduzca el nombre del juego: ";		getline(cin, GameName);
				DeleteGame(GameLibrary, GameName);
				cout << "\n\t\t" << system("pause");
				break;

			case 5:		//* --> SHOW ALL GAMES
				system("cls");
				cout << "\n\t\t-----Games-----\n";
				ShowAllGames(GameLibrary);
				cout << "\n\t\t" << system("pause");
				break;

			case 6:		//* --> EXIT
				system("cls");
				cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
				cout << "\t\tMAY THE FORCE BE WITH YOU!" << endl;
				menu = false;
				cout << "\n\t\t" << system("pause");
				break;

			default:	//* --> DEFAULT
				system("cls");
				cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
				cout << "\t\tIntroduzca una opcion valida..." << endl;
				cout << "\n\t\t" << system("pause");
				break;
		}
	} while (menu == true);

	return 0;
}





// ! 		:::::::::: FUNCTIONS :::::::::: 

//* 1	----> ADD GAME <----	 *//

void addGame (Game *& GameLibrary, string GameName, string ReleaseDate, float Rating, string Platforms, string Genre, string Developer) {
	Game *NewGame = new Game();
	NewGame -> GameName = GameName;
	NewGame -> ReleaseDate = ReleaseDate;
	NewGame -> Rating = Rating;
	NewGame -> Platforms = Platforms;
	NewGame -> Genre = Genre;
	NewGame -> Developer = Developer;

	Game *pointer = GameLibrary;

	GameLibrary = NewGame;
	NewGame -> next = pointer;

	cout << "\n\t\tEl juego se agrego correctamente a la biblioteca de juegos." << endl;
}

//* 2	----> SEARCH GAME <----	 *//

void SearchGame (Game *GameLibrary, string GameName) {
 	Game *Position = new Game();
 	Position = GameLibrary;
	bool found = false;

	while (Position != NULL) {
		if (Position -> GameName == GameName){
			found = true;
			ShowGame(Position);
		} 
		Position = Position -> next;
	}
	if (found == false ){
		cout<< "\t\tEl Juego "<<GameName<<" no se encontro en la biblioteca. \n";
	}
}

void ShowGame (Game *Position){
	cout << "\t\tNombre del juego: " << Position -> GameName << endl;
	cout << "\t\tFecha de lanzamiento: " << Position -> ReleaseDate << endl;
	cout << "\t\tValoracion: " << Position -> Rating << endl;
	cout << "\t\tPlataformas: " << Position -> Platforms << endl;
	cout << "\t\tGenero: " << Position -> Genre << endl;
	cout << "\t\tDesarrollador: " << Position -> Developer << endl;
}

//* 4	----> DELETE GAME <----	 *//

void DeleteGame (Game *& GameLibrary, string GameName) {
	Game *Position = new Game();
	Game *Previous = new Game();
	Position = GameLibrary;

	while (Position != NULL && Position -> GameName != GameName) {
		Previous = Position;
		Position = Position -> next;
	}

	if (Position == NULL) {
		cout << "\t\tEl juego no se encontro en la biblioteca." << endl;
	} else if (Position == GameLibrary) {
		GameLibrary = GameLibrary -> next;
		delete Position;
		cout << "\t\tEl juego se elimino correctamente." << endl;
	} else {
		Previous -> next = Position -> next;
		delete Position;
		cout << "\t\tEl juego se elimino correctamente." << endl;
	}
}

//* 5	----> SHOW ALL GAMES <----	 *//

void ShowAllGames (Game *GameLibrary){
	float i = 1;
	Game *Position = new Game();
	Position = GameLibrary;

	while (Position != NULL) {
		cout<< i << "._ " << Position -> GameName<<endl;
		Position = Position -> next;
		i++;
	}
}


