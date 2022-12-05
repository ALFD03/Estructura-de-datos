//Bibloteca de juegos para la PC

#include <iostream>
#include <list>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

struct Juegos{
    char titulo[50];
    char genero[50];
    char fecha_lanzamiento[50];
    char valoracion[50];
    Juegos *siguiente;
};

void insertar(Juegos *&,char[]);

int main(){ 
    Juegos *lista=NULL;
    char jogo [50];

    int opc=0;
    
    cout<<"cuantos juegos desea ingresar:";
   

    cout<<"---------- Bienvenidos ----------\n\n";
    cout<<"Menu de Opciones\n";
    cout<<"1. Ingresar nuevo Juego.\n";
    cout<<"2. Eliminar Juego.\n";
    cout<<"3. Buscar juego. \n";
    cout<<"4. Mostrar juegos Guardados.\n";
    cout<<"\nIngrese una opcion: ";
    cin>>opc;

    switch (opc)
    {
    case 1:
    {
    	cin.getline(jogo,50,'\n');
//        cout<<"Ingresar un nuevo juegos\n ";
//        cout<<"\n1._ Titulo del Juego: ";
//        cin.getline(Juegos.titulo,50,'\n');
//        cout<<"\n2._ Genero del Juego: ";
//        cin.getline(Juegos.genero,50,'\n');
//        cout<<"\n3._ Fecha de lanzamiento del Juego: ";
//        cin.getline(Juegos.fecha_lanzamiento,50,'\n');
//        cout<<"\n4._ Valoracion del Juego: ";
//        cin.getline(Juegos.valoracion,50,'\n');

        insertar(lista,jogo);
    }
        break;
    
    default:
        break;
    }

    

    return 0;
}

void insertar(Juegos *&,char t[]){
    Juegos *nuevo_juego = new Juegos();

	Juegos *lista=NULL;
    Juegos *aux1=lista;
    Juegos *aux2;

    while((aux1!=NULL)&&(aux1->titulo<t)){
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if(lista==aux1){
        lista=nuevo_juego;
    }
    else{
        aux2->siguiente=nuevo_juego;
    }
    nuevo_juego->siguiente=aux1;

    cout<<"\tRegistro guardado";
    
}
