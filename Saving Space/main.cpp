#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "libgame.h"

#define TECLA_ARRIBA 72
#define TECLA_ABAJO 80
#define ENTER 13

using namespace std;

int main(){
    
   vidas(3);
   getch();
   menu_principal();

    return 0;
}

void menu_principal(){

   bool start = true;
   int opc;

   int n = 4;
   do{
   system("cls");
   Color(AZUL);
   pintar_marco();
   Color(BLANCO);
   pintar_titulo();
   Color(BLANCO);
   fondo_menu();
   opc = MostrarOpciones(n);
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
    int tecla;
    int num_vidas = 8;

    int y = 1, x = 1;
    int yy = 2, xx = 1;
    int y1 = 3, x1 = 1;
    do{
      system("cls");
      Color(AZUL);
      pintar_marco();
      Color(BLANCO);
      Diseno_Juego();
      Color(AQUA);
      gotoxy(67,2); cout<<"PUNTAJE:";
      Color(VERDE);
      gotoxy(67,4);cout<<"VIDAS:";
      Color(GRIS);
      gotoxy(67,6);cout<<char(174)<<"Doble ENTER";
      gotoxy(68,7);cout<<"PARA SALIR"<<char(175);
      tecla = getch();
      OcultaCursor();
      do{

      }while(tecla!=ENTER);
      switch(tecla){

      case ENTER:
        start = false;
        break;

      }

    }while(start);

}
void controles(){

    bool start = true;
    int tecla;
    do{
      system("cls");
      OcultaCursor;
      Color(AZUL);
      pintar_marco();
      Color(BLANCO);
      Msotrar_Controles();
      Color(GRIS);
      gotoxy(67,1);cout<<char(174)<<"Doble ENTER";
      gotoxy(68,2);cout<<"PARA SALIR"<<char(175);
      tecla = getch();
      do{

      }while(tecla!=ENTER);
      switch(tecla){

      case ENTER:
        start = false;
        break;

      }

    }while(start);

}

void creditos(){

    bool start = true;
    int tecla;
    do{
      system("cls");
      OcultaCursor;
      Color(AZUL);
      pintar_marco();
      Color(BLANCO);
      Mostrar_Creditos();
      Color(GRIS);
      gotoxy(67,1);cout<<char(174)<<"Doble ENTER";
      gotoxy(68,2);cout<<"PARA SALIR"<<char(175);
      tecla = getch();
      do{

      }while(tecla!=ENTER);
      switch(tecla){

      case ENTER:
        start = false;
        break;

      }

    }while(start);
}

int MostrarOpciones(int n){

    int seleccion = 1;
    int tecla;
    bool bucle = true;
    do{
        system("cls");
        OcultaCursor();
        Color(AZUL);
        pintar_marco();
        Color(BLANCO);
        pintar_tituloR();
        Color(BLANCO);
        fondo_menuR();
        Color(ROJO);
        gotoxy(68,2);cout<<"1.-JUGAR";
        Color(VERDE);
        gotoxy(68,3);cout<<"2.-CONTROLES";
        Color(AMARILLO);
        gotoxy(68,4);cout<<"3.-CREDITOS";
        Color(AZULC);
        gotoxy(68,5);cout<<"4.-SALIR";
        Color(PLATA);
        gotoxy(66,1 + seleccion); cout<<"->";

        do{
            tecla = getch();
        }while(tecla != TECLA_ARRIBA && tecla != TECLA_ABAJO && tecla != ENTER);
        switch(tecla){

        case TECLA_ARRIBA:
            seleccion--;
            if(seleccion < 1){
                seleccion = n;
            }
            break;
        case TECLA_ABAJO:
            seleccion++;
            if(seleccion > n){
                seleccion = 1;
            }
            break;
        case ENTER:
            bucle = false;
            break;
        }
    }while(bucle);
    return seleccion;
}
