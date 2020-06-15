#ifndef LIBGAME_H_INCLUDED
#define LIBGAME_H_INCLUDED

// NUMEROS ASOCIADOS A LAS FLECHAS DEL TECLADO
#define W_ARRIBA     87
#define A_IZQUIERDA  65
#define D_DERECHA    68
#define S_ABAJO      83
#define ESC          27

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
void pintar_tituloR();
void fondo_menu();
void fondo_menuR();
void Color(int color);
void pausa(int x);
void pausa();
void Diseno_Juego();
void Msotrar_Controles();
void Mostrar_Creditos();

#endif // LIBGAME_H_INCLUDED
