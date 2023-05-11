#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float x1 = ingresarCoordenadaX();
    float y1 = ingresarCoordenadaY();
    float x2 = ingresarCoordenadaX();
    float y2 = ingresarCoordenadaY();
    float x3 = ingresarCoordenadaX();
    float y3 = ingresarCoordenadaY();

    float bx = obtenerBaricentroX(x1,x2,x3);
    float by = obtenerBaricentroX(y1,y2,y3);

    calcularArea(radio);

    return 0;
}
