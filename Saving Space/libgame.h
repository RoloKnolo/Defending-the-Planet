#ifndef LIBGAME_H_INCLUDED
#define LIBGAME_H_INCLUDED

// NUMEROS ASOCIADOS A LAS FLECHAS DEL TECLADO
#define ARRIBA     87
#define IZQUIERDA  65
#define DERECHA    68
#define ABAJO      83
#define ESC        27
#define ENTER      13

// colores
#define AZUL       0x001
#define VERDE      0x002
#define AQUA       0x003
#define ROJO       0x004
#define MORADO     0x005
#define AMARILLO   0x006
#define BLANCO     0x007
#define GRIS       0x008

#define AZULC      0x009
#define VERDEC     0x00A
#define AQUAC      0x00B
#define ROJOC      0x00C
#define MORADOC    0x00D
#define AMARILLOC  0x00E
#define PLATA      0x00F

void gotoxy(int x, int y);
void OcultaCursor();
void pintar_marco();
void pintar_titulo();
void fondo_menu();
void Color(int color);
void pausa(int x);
void pausa();

#endif // LIBGAME_H_INCLUDED
