#include <stdio.h>
#include "alumno.h"

int main(void) {
    /**
     * @brief Creo un alumno a serializar
     *
     */
    static const struct alumno_s yo = {
        .apellido = "Lencina Martínez",
        .nombre = "Luis Santiago",
        .documento = 41299945,
    };
    char cadena[128];

    /**
     * @brief  Envio alumno a Serializar
     *
     */
    if (serializar(&yo, cadena, sizeof(cadena)) >= 0) {
        printf("%s\n", cadena);
    } else {
        printf("Error al serializar\n");
    }

    return 0;
}