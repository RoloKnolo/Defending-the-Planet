# Defending-the-Planet
Integrantes: Angel Emmanuel Higuera Aguilar.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "libgame.h"

using namespace std;

void menu_principal();
void juego();
void controles();
void creditos();

int main(){

   menu_principal();

    return 0;
}

void menu_principal(){

   bool start = true;
   int opc;

   do{
   system("title Saving Space");
   system("cls");
   OcultaCursor();
   Color(AZUL);
   pintar_marco();
   Color(BLANCO);
   pintar_titulo();
   Color(BLANCO);
   fondo_menu();
   Color(ROJO);
   gotoxy(66,1);cout<<"1.-JUGAR-";
   Color(VERDE);
   gotoxy(66,3);cout<<"2.-CONTROLES-";
   Color(AMARILLO);
   gotoxy(66,5);cout<<"3.-CREDITOS-";
   Color(AQUA);
   gotoxy(66,7);cout<<"4.-SALIR-";

   cin>>opc;

   switch(opc){

   case 1:

       juego();

    break;

    case 2:

        controles();

    break;

    case 3:

        creditos();

    break;

    case 4:

        start = false;

    break;

   }

   pausa();

   }while(start);
}

void juego(){

    bool start = true;

    int salir;
    do{
        system("cls");
        Color(AZUL);
        pintar_marco();
        Color(BLANCO);
        gotoxy(30,10);cout<<"---JUEGO---";
        Color(VERDE);
        gotoxy(66,1);cout<<"VIDAS: ";
        Color(PLATA);
        gotoxy(66,3);cout<<"PUNTAJE: ";
        Color(BLANCO);
        gotoxy(66,5);cout<<"--SALIR--";
        cin>>salir;

      switch(salir){

      case 1:

        start = false;
        break;

      }

    }while(start);

}
void controles(){

    bool start = true;

    int salir;
    do{
        system("cls");
        Color(AZUL);
        pintar_marco();
        Color(BLANCO);
        gotoxy(30,10);cout<<"---Controles---";
        gotoxy(66,1);cout<<"--SALIR--";
        cin>>salir;

      switch(salir){

      case 1:

        start = false;
        break;

      }

    }while(start);

}

void creditos(){

    bool start = true;

    int salir;
    do{

      system("cls");
      Color(AZUL);
      pintar_marco();
      Color(BLANCO);
      gotoxy(30,10);cout<<"---CREDITOS---";
      gotoxy(66,1);cout<<"--SALIR--";
      cin>>salir;

      switch(salir){

      case 1:

        start = false;
        break;

      }

    }while(start);


}
