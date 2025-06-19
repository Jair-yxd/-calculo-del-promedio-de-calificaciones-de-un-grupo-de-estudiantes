#include <stdio.h>

int main() {
    int cantidad_estudiantes;
    int i;
    float nota;
    float suma = 0;
    float max = 0;
    float min = 100;
        printf("Indique cual es la cantidad de estudiantes:");
        scanf("%d", &cantidad_estudiantes);
    while (cantidad_estudiantes <= 0) {
        
        printf("La cantidad de estudiantes no puede ser menor a 0:");
        scanf("%d", &cantidad_estudiantes);
    
    }
    
    
    for (i = 1; i <= cantidad_estudiantes; i++) {
        printf("Ingrese la nota del estudiante de (0 a 100) %d: ", i);
        scanf("%f", &nota);

    while (nota < 0 || nota > 100) {
        printf("Nota inválida. la nota debe estar entre 0 y 100: ");
        scanf("%f", &nota);
    }

    suma += nota;

    if (nota >= max) max = nota;
    if (nota <= min) min = nota;
    }

    printf("\nPromedio: %.2f\n", suma / cantidad_estudiantes);
    printf("Nota más alta: %.2f\n", max);
    printf("Nota más baja: %.2f\n", min);

    return 0;
}
/* El link del repositorio es el siguiente:
https://github.com/Jair-yxd/-calculo-del-promedio-de-calificaciones-de-un-grupo-de-estudiantes
*/