# <center> Biblioteca de Juegos </center>
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
* ShowAllGames.

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

struct Game {
	string GameName ; 		//Nombre del juego
	string ReleaseDate ; 	//Fecha de lanzamiento
	int Rating; 			//Calificacion
	string Platforms ;	    //Plataformas
	string Genre ;			//Genero
	string Developer ;		//Desarrollador
	Game *next;				//Puntero al next nodo
};

```

### Prototipo de Funciones

```c++

void addGame (Game *&, string, string, int, string, string, string);
void ShowAllGames (Game *);
void ShowGame (Game *);
void SearchGame (Game *, string);
void DeleteGame (Game *&, string);

```

### Menu

```c++

int main(){

	Game *GameLibrary = NULL; 										//Declaracion de la lista
	int Rating, option; 											//Declaracion de variables
	string GameName, ReleaseDate, Platforms, Genre, Developer; 		//Declaracion de variables

 	//-------------------------Menu-------------------------
	cout << "-----Welcome to the game library-----" << endl;
	cout << "1. Add a game" << endl;
	cout << "2. Search a game" << endl;
	cout << "3. Edit a game" << endl;
	cout << "4. Delete a game" << endl;
	cout << "5. Show all games" << endl;
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

```

### Case 2

```c++

	system("cls");
	cin.ignore();
	cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
	cout << "\t\tIntroduzca el nombre del juego: ";		getline(cin, GameName);
	SearchGame(GameLibrary, GameName);
	cout << "\n\t\t" << system("pause");
	break;

```

### Case 4

```c++

	system("cls");
	cin.ignore();
	cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
	cout << "\t\tIntroduzca el nombre del juego: ";		getline(cin, GameName);
	DeleteGame(GameLibrary, GameName);
	cout << "\n\t\t" << system("pause");
	break;

```

### Case 5

```c++

	system("cls");
	cout << "\n\t\t-----Games-----\n";
	ShowAllGames(GameLibrary);
	cout << "\n\t\t" << system("pause");
	break;

```

### Case 6

```c++

	system("cls");
	cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
	cout << "\t\tMAY THE FORCE BE WITH YOU!" << endl;
	menu = false;
	cout << "\n\t\t" << system("pause");
	break;

```

### Default

```c++

	system("cls");
	cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
	cout << "\t\tIntroduzca una opcion valida..." << endl;
	cout << "\n\t\t" << system("pause");
	break;

```

## Funciones del programa

### AddGame

```c++

void addGame (Game *& GameLibrary, string GameName, string ReleaseDate, int Rating, string Platforms, string Genre, string Developer) {
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

	cout << "\nEl juego se agrego correctamente a la biblioteca de juegos" << endl;
}

```

### ShowAllGames

```c++

void ShowAllGames (Game *GameLibrary){
	int i = 1;
	Game *Position = new Game();
	Position = GameLibrary;

	while (Position != NULL) {
		cout<< i << "._ " << Position -> GameName<<endl;
		Position = Position -> next;
		i++;
	}
}

```

### ShowGame

```c++

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

```

### DeleteGame

```c++

void DeleteGame (Game *& GameLibrary, string GameName) {
	Game *Position = new Game();
	Game *Previous = new Game();
	Position = GameLibrary;

	while (Position != NULL && Position -> GameName != GameName) {
		Previous = Position;
		Position = Position -> next;
	}

	if (Position == NULL) {
		cout << "El juego no se encontro en la biblioteca" << endl;
	} else if (Position == GameLibrary) {
		GameLibrary = GameLibrary -> next;
		delete Position;
		cout << "El juego se elimino correctamente" << endl;
	} else {
		Previous -> next = Position -> next;
		delete Position;
		cout << "El juego se elimino correctamente" << endl;
	}
}

```
----

## <center> MAIN FUNCTION </center>

```c++

int main() {
	Game *GameLibrary = NULL; 										//Declaracion de la lista
	int Rating, option, menu = true; 											//Declaracion de variables
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

```