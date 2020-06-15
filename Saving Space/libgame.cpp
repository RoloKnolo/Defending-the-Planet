#include "libgame.h"
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
                            //Limmite estandar de la consola Ancho(x) = 80, Largo(y) = 25.
void gotoxy(int x, int y)  //funcion que posiciona el cursos en la coordenada (x,y).
{
    HANDLE hCon;
    COORD dwPos;

    dwPos.X = x;
    dwPos.Y = y;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon,dwPos);
}

void OcultaCursor() {
    CONSOLE_CURSOR_INFO cci = {100, FALSE};// El segundo miembro de la estructura indica si se muestra el cursor o no.

    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}

void Color(int color){
	static HANDLE hConsole;
    hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute( hConsole, color | (0 * 0x10 + 0x100) );
}

void pintar_marco()// funcion que pinta los limites del escenario
{
     // Lineas horizontals
     for(int i=0; i < 80; i++){

     // Linea horizontal Superior
        gotoxy (i, 0);cout<<char(205);
     // Linea horizontal inferior
        gotoxy(i, 25);cout<<char(205);

     }
     for(int v=0; v < 25; v++){

     //Linea vertical Principal
        gotoxy (0,v);cout<<char(186);
     //Linea vertical Penultima
        gotoxy(65,v);cout<<char(186);
     //Linea vertical Final
        gotoxy(80,v);cout<<char(186);
     }
     // Esquinas
        gotoxy(0,0);cout<<char(201);
        gotoxy(0,25);cout<<char(200);
        gotoxy(80,0);cout<<char(187);
        gotoxy(80,25);cout<<char(188);
        gotoxy(65,0);cout<<char(203);
        gotoxy(65,25);cout<<char(202);
}

void pintar_titulo(){
   //Primera linea del titulo
gotoxy(16,1);cout<<char(201); Sleep(50);
gotoxy(17,1);cout<<char(205); Sleep(50);
gotoxy(18,1);cout<<char(205); Sleep(50);
gotoxy(19,1);cout<<char(205); Sleep(50);
gotoxy(20,1);cout<<char(187); Sleep(50);
gotoxy(21,1);cout<<char(201); Sleep(50);
gotoxy(22,1);cout<<char(205); Sleep(50);
gotoxy(23,1);cout<<char(205); Sleep(50);
gotoxy(24,1);cout<<char(205); Sleep(50);
gotoxy(25,1);cout<<char(187); Sleep(50);
gotoxy(27,1);cout<<char(187); Sleep(50);
gotoxy(31,1);cout<<char(201); Sleep(50);
gotoxy(33,1);cout<<char(205); Sleep(50);
gotoxy(34,1);cout<<char(205); Sleep(50);
gotoxy(35,1);cout<<char(203); Sleep(50);
gotoxy(36,1);cout<<char(205); Sleep(50);
gotoxy(37,1);cout<<char(205); Sleep(50);
gotoxy(36,1);cout<<char(205); Sleep(50);
gotoxy(39,1);cout<<char(201); Sleep(50);
gotoxy(40,1);cout<<char(187); Sleep(50);
gotoxy(43,1);cout<<char(203); Sleep(50);
gotoxy(45,1);cout<<char(201); Sleep(50);
gotoxy(46,1);cout<<char(205); Sleep(50);
gotoxy(47,1);cout<<char(205); Sleep(50);
gotoxy(48,1);cout<<char(205); Sleep(50);
gotoxy(49,1);cout<<char(187); Sleep(50);
//Segunda linea del titulo
gotoxy(16,2);cout<<char(200); Sleep(50);
gotoxy(17,2);cout<<char(205); Sleep(50);
gotoxy(18,2);cout<<char(205); Sleep(50);
gotoxy(19,2);cout<<char(205); Sleep(50);
gotoxy(20,2);cout<<char(187); Sleep(50);
gotoxy(21,2);cout<<char(204); Sleep(50);
gotoxy(22,2);cout<<char(205); Sleep(50);
gotoxy(23,2);cout<<char(205); Sleep(50);
gotoxy(24,2);cout<<char(205); Sleep(50);
gotoxy(25,2);cout<<char(185); Sleep(50);
gotoxy(27,2);cout<<char(200); Sleep(50);
gotoxy(28,2);cout<<char(187); Sleep(50);
gotoxy(30,2);cout<<char(201); Sleep(50);
gotoxy(31,2);cout<<char(188); Sleep(50);
gotoxy(35,2);cout<<char(186); Sleep(50);
gotoxy(39,2);cout<<char(186); Sleep(50);
gotoxy(40,2);cout<<char(200); Sleep(50);
gotoxy(41,2);cout<<char(205); Sleep(50);
gotoxy(42,2);cout<<char(187); Sleep(50);
gotoxy(43,2);cout<<char(186); Sleep(50);
gotoxy(45,2);cout<<char(186); Sleep(50);
gotoxy(47,2);cout<<char(201); Sleep(50);
gotoxy(48,2);cout<<char(205); Sleep(50);
gotoxy(49,2);cout<<char(187); Sleep(50);
//Tercera linea del titulo
gotoxy(16,3);cout<<char(200); Sleep(50);
gotoxy(17,3);cout<<char(205); Sleep(50);
gotoxy(18,3);cout<<char(205); Sleep(50);
gotoxy(19,3);cout<<char(205); Sleep(50);
gotoxy(20,3);cout<<char(188); Sleep(50);
gotoxy(21,3);cout<<char(202); Sleep(50);
gotoxy(25,3);cout<<char(202); Sleep(50);
gotoxy(28,3);cout<<char(200); Sleep(50);
gotoxy(29,3);cout<<char(205); Sleep(50);
gotoxy(30,3);cout<<char(188); Sleep(50);
gotoxy(33,3);cout<<char(205); Sleep(50);
gotoxy(34,3);cout<<char(205); Sleep(50);
gotoxy(35,3);cout<<char(202); Sleep(50);
gotoxy(36,3);cout<<char(205); Sleep(50);
gotoxy(37,3);cout<<char(205); Sleep(50);
gotoxy(39,3);cout<<char(202); Sleep(50);
gotoxy(42,3);cout<<char(200); Sleep(50);
gotoxy(43,3);cout<<char(188); Sleep(50);
gotoxy(45,3);cout<<char(200); Sleep(50);
gotoxy(46,3);cout<<char(205); Sleep(50);
gotoxy(47,3);cout<<char(205); Sleep(50);
gotoxy(48,3);cout<<char(205); Sleep(50);
gotoxy(49,3);cout<<char(188); Sleep(50);
//Cuarta linea del titulo
gotoxy(19,4);cout<<char(201); Sleep(50);
gotoxy(20,4);cout<<char(205); Sleep(50);
gotoxy(21,4);cout<<char(205); Sleep(50);
gotoxy(22,4);cout<<char(205); Sleep(50);
gotoxy(23,4);cout<<char(187); Sleep(50);
gotoxy(25,4);cout<<char(201); Sleep(50);
gotoxy(26,4);cout<<char(205); Sleep(50);
gotoxy(27,4);cout<<char(205); Sleep(50);
gotoxy(28,4);cout<<char(205); Sleep(50);
gotoxy(29,4);cout<<char(187); Sleep(50);
gotoxy(31,4);cout<<char(201); Sleep(50);
gotoxy(32,4);cout<<char(205); Sleep(50);
gotoxy(33,4);cout<<char(205); Sleep(50);
gotoxy(34,4);cout<<char(205); Sleep(50);
gotoxy(35,4);cout<<char(187); Sleep(50);
gotoxy(37,4);cout<<char(201); Sleep(50);
gotoxy(38,4);cout<<char(205); Sleep(50);
gotoxy(39,4);cout<<char(205); Sleep(50);
gotoxy(40,4);cout<<char(205); Sleep(50);
gotoxy(41,4);cout<<char(187); Sleep(50);
gotoxy(43,4);cout<<char(201); Sleep(50);
gotoxy(44,4);cout<<char(205); Sleep(50);
gotoxy(45,4);cout<<char(205); Sleep(50);
gotoxy(46,4);cout<<char(205); Sleep(50);
gotoxy(47,4);cout<<char(187); Sleep(50);
//Quinta linea del titulo
gotoxy(19,5);cout<<char(200); Sleep(50);
gotoxy(20,5);cout<<char(205); Sleep(50);
gotoxy(21,5);cout<<char(205); Sleep(50);
gotoxy(22,5);cout<<char(205); Sleep(50);
gotoxy(23,5);cout<<char(187); Sleep(50);
gotoxy(25,5);cout<<char(204); Sleep(50);
gotoxy(26,5);cout<<char(205); Sleep(50);
gotoxy(27,5);cout<<char(205); Sleep(50);
gotoxy(28,5);cout<<char(205); Sleep(50);
gotoxy(29,5);cout<<char(188); Sleep(50);
gotoxy(31,5);cout<<char(204); Sleep(50);
gotoxy(32,5);cout<<char(205); Sleep(50);
gotoxy(33,5);cout<<char(205); Sleep(50);
gotoxy(34,5);cout<<char(205); Sleep(50);
gotoxy(35,5);cout<<char(185); Sleep(50);
gotoxy(37,5);cout<<char(186); Sleep(50);
gotoxy(43,5);cout<<char(204); Sleep(50);
gotoxy(44,5);cout<<char(205); Sleep(50);
gotoxy(45,5);cout<<char(205); Sleep(50);
gotoxy(46,5);cout<<char(205); Sleep(50);
//Sexta linea del titulo
gotoxy(19,6);cout<<char(200); Sleep(50);
gotoxy(20,6);cout<<char(205); Sleep(50);
gotoxy(21,6);cout<<char(205); Sleep(50);
gotoxy(22,6);cout<<char(205); Sleep(50);
gotoxy(23,6);cout<<char(188); Sleep(50);
gotoxy(25,6);cout<<char(202); Sleep(50);
gotoxy(31,6);cout<<char(202); Sleep(50);
gotoxy(35,6);cout<<char(202); Sleep(50);
gotoxy(37,6);cout<<char(200); Sleep(50);
gotoxy(38,6);cout<<char(205); Sleep(50);
gotoxy(39,6);cout<<char(205); Sleep(50);
gotoxy(40,6);cout<<char(205); Sleep(50);
gotoxy(41,6);cout<<char(188); Sleep(50);
gotoxy(43,6);cout<<char(200); Sleep(50);
gotoxy(44,6);cout<<char(205); Sleep(50);
gotoxy(45,6);cout<<char(205); Sleep(50);
gotoxy(46,6);cout<<char(205); Sleep(50);
gotoxy(47,6);cout<<char(188); Sleep(50);
}

void pintar_tituloR(){
   //Primera linea del titulo
gotoxy(16,1);cout<<char(201);
gotoxy(17,1);cout<<char(205);
gotoxy(18,1);cout<<char(205);
gotoxy(19,1);cout<<char(205);
gotoxy(20,1);cout<<char(187);
gotoxy(21,1);cout<<char(201);
gotoxy(22,1);cout<<char(205);
gotoxy(23,1);cout<<char(205);
gotoxy(24,1);cout<<char(205);
gotoxy(25,1);cout<<char(187);
gotoxy(27,1);cout<<char(187);
gotoxy(31,1);cout<<char(201);
gotoxy(33,1);cout<<char(205);
gotoxy(34,1);cout<<char(205);
gotoxy(35,1);cout<<char(203);
gotoxy(36,1);cout<<char(205);
gotoxy(37,1);cout<<char(205);
gotoxy(36,1);cout<<char(205);
gotoxy(39,1);cout<<char(201);
gotoxy(40,1);cout<<char(187);
gotoxy(43,1);cout<<char(203);
gotoxy(45,1);cout<<char(201);
gotoxy(46,1);cout<<char(205);
gotoxy(47,1);cout<<char(205);
gotoxy(48,1);cout<<char(205);
gotoxy(49,1);cout<<char(187);
//Segunda linea del titulo
gotoxy(16,2);cout<<char(200);
gotoxy(17,2);cout<<char(205);
gotoxy(18,2);cout<<char(205);
gotoxy(19,2);cout<<char(205);
gotoxy(20,2);cout<<char(187);
gotoxy(21,2);cout<<char(204);
gotoxy(22,2);cout<<char(205);
gotoxy(23,2);cout<<char(205);
gotoxy(24,2);cout<<char(205);
gotoxy(25,2);cout<<char(185);
gotoxy(27,2);cout<<char(200);
gotoxy(28,2);cout<<char(187);
gotoxy(30,2);cout<<char(201);
gotoxy(31,2);cout<<char(188);
gotoxy(35,2);cout<<char(186);
gotoxy(39,2);cout<<char(186);
gotoxy(40,2);cout<<char(200);
gotoxy(41,2);cout<<char(205);
gotoxy(42,2);cout<<char(187);
gotoxy(43,2);cout<<char(186);
gotoxy(45,2);cout<<char(186);
gotoxy(47,2);cout<<char(201);
gotoxy(48,2);cout<<char(205);
gotoxy(49,2);cout<<char(187);
//Tercera linea del titulo
gotoxy(16,3);cout<<char(200);
gotoxy(17,3);cout<<char(205);
gotoxy(18,3);cout<<char(205);
gotoxy(19,3);cout<<char(205);
gotoxy(20,3);cout<<char(188);
gotoxy(21,3);cout<<char(202);
gotoxy(25,3);cout<<char(202);
gotoxy(28,3);cout<<char(200);
gotoxy(29,3);cout<<char(205);
gotoxy(30,3);cout<<char(188);
gotoxy(33,3);cout<<char(205);
gotoxy(34,3);cout<<char(205);
gotoxy(35,3);cout<<char(202);
gotoxy(36,3);cout<<char(205);
gotoxy(37,3);cout<<char(205);
gotoxy(39,3);cout<<char(202);
gotoxy(42,3);cout<<char(200);
gotoxy(43,3);cout<<char(188);
gotoxy(45,3);cout<<char(200);
gotoxy(46,3);cout<<char(205);
gotoxy(47,3);cout<<char(205);
gotoxy(48,3);cout<<char(205);
gotoxy(49,3);cout<<char(188);
//Cuarta linea del titulo
gotoxy(19,4);cout<<char(201);
gotoxy(20,4);cout<<char(205);
gotoxy(21,4);cout<<char(205);
gotoxy(22,4);cout<<char(205);
gotoxy(23,4);cout<<char(187);
gotoxy(25,4);cout<<char(201);
gotoxy(26,4);cout<<char(205);
gotoxy(27,4);cout<<char(205);
gotoxy(28,4);cout<<char(205);
gotoxy(29,4);cout<<char(187);
gotoxy(31,4);cout<<char(201);
gotoxy(32,4);cout<<char(205);
gotoxy(33,4);cout<<char(205);
gotoxy(34,4);cout<<char(205);
gotoxy(35,4);cout<<char(187);
gotoxy(37,4);cout<<char(201);
gotoxy(38,4);cout<<char(205);
gotoxy(39,4);cout<<char(205);
gotoxy(40,4);cout<<char(205);
gotoxy(41,4);cout<<char(187);
gotoxy(43,4);cout<<char(201);
gotoxy(44,4);cout<<char(205);
gotoxy(45,4);cout<<char(205);
gotoxy(46,4);cout<<char(205);
gotoxy(47,4);cout<<char(187);
//Quinta linea del titulo
gotoxy(19,5);cout<<char(200);
gotoxy(20,5);cout<<char(205);
gotoxy(21,5);cout<<char(205);
gotoxy(22,5);cout<<char(205);
gotoxy(23,5);cout<<char(187);
gotoxy(25,5);cout<<char(204);
gotoxy(26,5);cout<<char(205);
gotoxy(27,5);cout<<char(205);
gotoxy(28,5);cout<<char(205);
gotoxy(29,5);cout<<char(188);
gotoxy(31,5);cout<<char(204);
gotoxy(32,5);cout<<char(205);
gotoxy(33,5);cout<<char(205);
gotoxy(34,5);cout<<char(205);
gotoxy(35,5);cout<<char(185);
gotoxy(37,5);cout<<char(186);
gotoxy(43,5);cout<<char(204);
gotoxy(44,5);cout<<char(205);
gotoxy(45,5);cout<<char(205);
gotoxy(46,5);cout<<char(205);
//Sexta linea del titulo
gotoxy(19,6);cout<<char(200);
gotoxy(20,6);cout<<char(205);
gotoxy(21,6);cout<<char(205);
gotoxy(22,6);cout<<char(205);
gotoxy(23,6);cout<<char(188);
gotoxy(25,6);cout<<char(202);
gotoxy(31,6);cout<<char(202);
gotoxy(35,6);cout<<char(202);
gotoxy(37,6);cout<<char(200);
gotoxy(38,6);cout<<char(205);
gotoxy(39,6);cout<<char(205);
gotoxy(40,6);cout<<char(205);
gotoxy(41,6);cout<<char(188);
gotoxy(43,6);cout<<char(200);
gotoxy(44,6);cout<<char(205);
gotoxy(45,6);cout<<char(205);
gotoxy(46,6);cout<<char(205);
gotoxy(47,6);cout<<char(188);
}

void fondo_menu(){
   gotoxy(1,9);cout<<"   '   `     .    *      +    +       *   * '  '  + .  ' . '  +";Sleep(50);
   gotoxy(1,10);cout<<"     .        '     .    .    ' +    +  ' '  * +    +  ' '  *";Sleep(50);
   gotoxy(15,10);cout<<" + *  . .   * ~+ *  . .   *   .  '   .  + ' * . *";Sleep(50);
   gotoxy(1,11);cout<<"* '  +  . +    + .   , *   + + + *  . .   * ";Sleep(50);
   gotoxy(15,11);cout<<" *  '  + .  . ' . .   .  .. + *    *   +";Sleep(50);
   gotoxy(1,12);cout<<" ~ ~ * + \\___/";Sleep(50);
   gotoxy(15,12);cout<<"           ' . ' + *  . .    |.  '   '.  ' * . +";Sleep(50);
   gotoxy(1,13);cout<<"* ' .~ ~ (ooo)";Sleep(50);
   gotoxy(15,13);cout<<" , *  (*)    .-.,='*'=.     -o- .  *  . '  +  .  .";Sleep(50);
   gotoxy(1,14);cout<<"'  .  ~~ /   \\";Sleep(50);
   gotoxy(15,14);cout<<" * . + + *  .'=/_      \\     |   *    '  *. .   *";Sleep(50);
   gotoxy(1,15);cout<<", + ___   +  . '  -";Sleep(50);
   gotoxy(15,15);cout<<"     *        |  '=._   | , *  (*)" ;Sleep(50);
   gotoxy(1,16);cout<<"~~<{OOO}> ' . + *";Sleep(50);
   gotoxy(15,16);cout<<" ' .   . *     \\     `=./`,        '  *  . .    + ";Sleep(50);
   gotoxy(1,17);cout<<" *  .  ' \\_/";Sleep(50);
   gotoxy(15,17);cout<<" *  . .  ~  .   '=.__.=' `='      *   .    *   *'";Sleep(50);
   gotoxy(1,18);cout<<"  +  - ~~(O) '";Sleep(50);
   gotoxy(15,18);cout<<"  +                         +  * .   *    + *  .";Sleep(50);
   gotoxy(1,20);cout<<".   *    +     '       .  ' .   .    *  '; .  . ' . *   .  .. +";Sleep(50);
   gotoxy(1,19);cout<<" + *  . .   * ~+ *  . .   *   .  '   .  + ' * . * ' '  +  . *  +";Sleep(50);
   gotoxy(1,21);cout<<"*      .  '      .    *  . .   *    +     '       .  ' .   . *";Sleep(50);
   gotoxy(1,22);cout<<" +    +       *  .  '  *   .    *  . .   *    *     '  .  . ' *.";Sleep(50);
   gotoxy(1,23);cout<<" *      +    + .  '   .   .    *  . .   *  .  .    '; .  . ' . +";Sleep(50);
   gotoxy(1,24);cout<<".  . '    . .  ' * . *  .    * '  +  . +    +  ' '  *   , *   +";Sleep(50);
}

void fondo_menuR(){
   gotoxy(1,9);cout<<"   '   `     .    *      +    +       *   * '  '  + .  ' . '  +";
   gotoxy(1,10);cout<<"     .        '     .    .    ' +    +  ' '  * +    +  ' '  *";
   gotoxy(15,10);cout<<" + *  . .   * ~+ *  . .   *   .  '   .  + ' * . *";
   gotoxy(1,11);cout<<"* '  +  . +    + .   , *   + + + *  . .   * ";
   gotoxy(15,11);cout<<" *  '  + .  . ' . .   .  .. + *    *   +";
   gotoxy(1,12);cout<<" ~ ~ * + \\___/";
   gotoxy(15,12);cout<<"           ' . ' + *  . .    |.  '   '.  ' * . +";
   gotoxy(1,13);cout<<"* ' .~ ~ (ooo)";
   gotoxy(15,13);cout<<" , *  (*)    .-.,='*'=.     -o- .  *  . '  +  .  .";
   gotoxy(1,14);cout<<"'  .  ~~ /   \\";
   gotoxy(15,14);cout<<" * . + + *  .'=/_      \\     |   *    '  *. .   *";
   gotoxy(1,15);cout<<", + ___   +  . '  -";
   gotoxy(15,15);cout<<"     *        |  '=._   | , *  (*)" ;
   gotoxy(1,16);cout<<"~~<{OOO}> ' . + *";
   gotoxy(15,16);cout<<" ' .   . *     \\     `=./`,        '  *  . .    + ";
   gotoxy(1,17);cout<<" *  .  ' \\_/";
   gotoxy(15,17);cout<<" *  . .  ~  .   '=.__.=' `='      *   .    *   *'";
   gotoxy(1,18);cout<<"  +  - ~~(O) '";
   gotoxy(15,18);cout<<"  +                         +  * .   *    + *  .";
   gotoxy(1,20);cout<<".   *    +     '       .  ' .   .    *  '; .  . ' . *   .  .. +";
   gotoxy(1,19);cout<<" + *  . .   * ~+ *  . .   *   .  '   .  + ' * . * ' '  +  . *  +";
   gotoxy(1,21);cout<<"*      .  '      .    *  . .   *    +     '       .  ' .   . *";
   gotoxy(1,22);cout<<" +    +       *  .  '  *   .    *  . .   *    *     '  .  . ' *.";
   gotoxy(1,23);cout<<" *      +    + .  '   .   .    *  . .   *  .  .    '; .  . ' . +";
   gotoxy(1,24);cout<<".  . '    . .  ' * . *  .    * '  +  . +    +  ' '  *   , *   +";
}

void Diseno_Juego(){

    for(int i = 1; i < 65;i++){
        for(int j = 12; j < 25;j++){
            Color(VERDEC);
            gotoxy(i,j);cout<<char(219);
        }
    }

    for(int i = 6; i < 60;i++){
        for(int j = 12; j < 20;j++){
            Color(AZUL);
            gotoxy(i,j);cout<<char(219);
        }
    }

    for(int i = 1; i < 65;i++){
        for(int j = 21; j < 25;j++){
            Color(VERDE);
            gotoxy(i,j);cout<<char(219);
        }
    }

    for(int i = 28; i < 38;i++){
        for(int j = 12; j < 20;j++){
            Color(VERDEC);
            gotoxy(i,j);cout<<char(219);
        }
    }

    for(int i = 5; i < 12;i++){
        for(int j = 15; j < 20;j++){
            Color(VERDEC);
            gotoxy(i,j);cout<<char(219);
        }
    }

    for(int i = 54; i < 61;i++){
        for(int j = 15; j < 20;j++){
            Color(VERDEC);
            gotoxy(i,j);cout<<char(219);
        }
    }

    for(int i = 1; i < 65;i++){
        for(int j = 12; j <= 12;j++){
            Color(AQUA);
            gotoxy(i,j);cout<<char(220);
        }
    }

    Color(AMARILLO);
    gotoxy(2,11);cout<<char(220);
    gotoxy(4,11);cout<<char(220);
    Color(MORADO);
    gotoxy(3,10);cout<<"/";
    gotoxy(4,10);cout<<"/";
    gotoxy(3,11);cout<<char(202);

    Color(AMARILLO);
    gotoxy(61,11);cout<<char(220);
    gotoxy(63,11);cout<<char(220);
    Color(MORADO);
    gotoxy(61,10);cout<<"\\";
    gotoxy(62,10);cout<<"\\";
    gotoxy(62,11);cout<<char(202);

    for(int i = 1; i < 6; i++){
       Color(AQUAC);
       gotoxy(i,12);cout<<char(219);
    }

    for(int i = 60; i < 65; i++){
       Color(AQUAC);
       gotoxy(i,12);cout<<char(219);
    }
    Color(MORADOC);
    gotoxy(32,8);cout<<char(220);
    Color(AMARILLO);
    gotoxy(29,9);cout<<char(206);
    gotoxy(30,9);cout<<char(206);
    gotoxy(31,9);cout<<char(206);
    gotoxy(32,9);cout<<char(206);
    gotoxy(33,9);cout<<char(206);
    gotoxy(34,9);cout<<char(206);
    gotoxy(35,9);cout<<char(206);
    for(int i = 29; i < 36;i++){
        for(int j = 10; j < 12;j++){
            Color(AQUAC);
            gotoxy(i,j);cout<<char(219);
        }
    }

    for(int i = 28; i <38; i++){
        Color(AQUAC);
        gotoxy(i,12);cout<<char(219);
    }

    Color(PLATA);
    gotoxy(37,11);cout<<char(178);


}

void Msotrar_Controles(){

    Color(ROJO);
    gotoxy(30,9);cout<<"---CONTROLES---";
    Color(VERDE);
    gotoxy(17,12);cout<<"DISPARAR TORRE DE LA IZQUIERDA PRESIONE";
    gotoxy(57,11);cout<<char(201)<<char(205)<<char(187);
    gotoxy(57,12);cout<<char(186)<<"A"<<char(186);
    gotoxy(57,13);cout<<char(200)<<char(205)<<char(188);
    gotoxy(20,15);cout<<"DISPARAR TORRE DEL CENTRO PRESIONE";
    gotoxy(57,14);cout<<char(201)<<char(205)<<char(187);
    gotoxy(57,15);cout<<char(186)<<"W"<<char(186);
    gotoxy(57,16);cout<<char(200)<<char(205)<<char(188);
    gotoxy(20,18);cout<<"DISPARAR TORRE LA DERECHA PRESIONE";
    gotoxy(57,17);cout<<char(201)<<char(205)<<char(187);
    gotoxy(57,18);cout<<char(186)<<"D"<<char(186);
    gotoxy(57,19);cout<<char(200)<<char(205)<<char(188);
}

void Mostrar_Creditos(){
    Color(MORADO);
    gotoxy(27,10);cout<<"---CREDITOS---";
    Color(AQUAC);
    gotoxy(21,12);cout<<"DESARROLLADORA: UABCSGames"<<char(169);
    gotoxy(18,14);cout<<"MAESTRO DESARROLADOR: Sr.SOTO MU"<<char(165)<<"OZ";
    gotoxy(17,16);cout<<"VIDEOJUEGO CREADO POR: ANGEL EMMANUEL";


}

void pausa(int x){
    Sleep(x);
}

void pausa(){
    getch();
}
