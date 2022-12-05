# Biblioteca de Juegos

## Elementos de la biblioteca de juegos

* char NombreJuego [50];
* char FechaLanzamiento [10];
* int Valoracion;
* char Plataformas [50];
* char Genero [50];
* char Desarrollador [50];




## Menu

```c

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

```