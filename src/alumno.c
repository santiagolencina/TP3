#include "alumno.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief
 *
 * @param campo el campo a describir
 * @param valor la descripción
 * @param cadena lugar donde se escribe
 * @param espacio longitud de cadena
 * @return int tipo de valor retornado
 */
static int serializarCadena(const char * campo, const char * valor, char * cadena, int espacio) {
    return snprintf(cadena, espacio, "\"%s\":\"%s\",", campo, valor);
}

static int serializarNumero(const char * campo, int valor, char * cadena, int espacio) {
    return snprintf(cadena, espacio, "\"%s\":\"%d\",", campo, valor);
}

int serializar(const struct alumno_s * alumno, char cadena[], uint32_t espacio) {
    int resultado;
    int disponibles = espacio;
    cadena[0] = '{';
    cadena++;
    disponibles--;

    resultado = serializarCadena("Apellido", alumno->apellido, cadena, disponibles);

    if (resultado > 0) {
        disponibles -= resultado;
        cadena += resultado;
        resultado = serializarCadena("Nombre", alumno->nombre, cadena, disponibles);
    }
    if (resultado > 0) {
        disponibles -= resultado;
        cadena += resultado;
        resultado = serializarNumero("DNI", alumno->documento, cadena, disponibles);
    }
    if (resultado > 0) {
        cadena += resultado;
        *(cadena - 1) = '}';
        resultado = espacio - disponibles;
    }
    return resultado;
}