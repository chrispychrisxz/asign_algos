#include <stdio.h>
// carlos garcia

int main() {
    printf("EJ 1: Uso de Punteros:\n");
    int x = 10;
    int *p = &x;
    printf("%d", *p);
    printf("\n\nEJ 2: Dado el siguiente codigo, modifica el valor de y usando el puntero ptr.\n\n");
    //int main() {
    int y = 5;
    int *ptr = &y;
    // Escribe aquí la línea que cambia el valor de y a 20 usando ptr
    *ptr = 20;
    printf("%d", y);
    //return 0; }

    printf("\n\nEJ 3: Aritmetica de Punteros:\n\n");
    int z[5] = {2,5,9,10,2};
    *p = 0;
    for (int i = 0; i <= 5; i++) {
        printf("- %d (%d + %d)\n", *p+z[i], *p, z[i]);
        *p += z[i];
        }
    printf("\nEJ 4: Si q es un puntero a float y q = 0x1000, que direccion representa q + 3? (Supon sizeof(float) = 4).:\n\n");
    // no entendi para nada esta pregunta
    float *q;
    q = 0x1000;
    q=q+3;
    printf("%p",&q);
    // si se refiere a 0x1000 + 3, 0x1000 es 4096 en hexadecimal, por lo que q+3 es 4099, en hexadecimal 0x1003.

    printf("\n\nEJ 5: Dado el arreglo, determina si las siguientes comparaciones son verdaderas o falsas:\n\n");
    int valores[] = {10, 20, 30, 40};
    //asumo que tengo que sumar todos los valores dentro de el arreglo.

    *p = 0;
    for (int i = 0; i <= 3; i++) {
        *p += valores[i];
        printf("- %d (+%d)\n", *p, valores[i]);
    }
    int *p1 = *p;
    int *p2 = *p + 3;

    printf("\nVARIABLES:\n*p1 = %d\n*p2 = %d\nValores: %d\n\na) p1 == p2: ", p1, p2, *p);

    if (p1==p2) {
        printf("Verdadero");
    } else {printf("Falso");}
    printf(" (%d == %d)", p1, p2);

    printf("\nb) p1 < p2: ");
    if (p1<p2) {
        printf("Verdadero");
    } else {printf("Falso");}
    printf(" (%d < %d)", p1, p2);

    printf("\nc) p1 >= (valores + 4): ");
    if (p1 >= (*p + 4)) {
        printf("Verdadero");
    } else {printf("Falso");}
    printf(" (%d >= %d)", p1, (*p + 4));
}
