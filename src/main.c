/************************************************************************************************
Copyright (c) 2023, Luis Santiago Lencina Martínez  <santilencina98@gmail.com>
Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions: The above copyright notice and this
permission notice shall be included in all copies or substantial portions of the
Software. THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO
EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE. SPDX-License-Identifier: MIT
*************************************************************************************************/

/** \brief Tercer Trabajo Práctico
 **
 ** \addtogroup TPN°3
 ** \brief Trabajo Práctico número 3.
 ** @{ */

/* === Headers files inclusions
 * =============================================================== */

#include "alumno.h"
#include "stdio.h"

/* === Macros definitions====================================================================== */

/* === Private data type declarations========================================================== */

/* === Private variable declarations=========================================================== */

/* === Private function declarations=========================================================== */

/* === Public variable definitions============================================================= */

/* === Private variable definitions============================================================ */

/* === Private function implementation========================================================= */

/* === Public function implementation========================================================== */
int main(void) {

    char cadena[128];
    alumno_t yo = CrearAlumno("Lencina Martinez", "Luis Santiago", 41299945);
    if (yo != NULL) {

        if (Serializar(yo, cadena, sizeof(cadena)) >= 0) {

            printf("Alumno: %s\n", cadena);
        } else {

            printf("Error al serializar");
        }
    } else {

        printf("Error al crear alumno");
    }
    return 0;
}

/* === End of documentation====================================================================
 */

/** @} End of module definition for doxygen */