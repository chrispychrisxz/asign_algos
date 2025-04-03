// guarda un array de 3 estructuras alumno (nombre, nota) en binario, y que lo lea

// guarda un numero entero (int) en un archivo binario numero.bin, y que lo lea en pantalla

// copie el contenido de un origen.txt a copia.txt, y verifique si existe antes de copiar

// defina una estrucutra alumno con nombre, edad, y promedio. Guarde un array de 3 alumnos en alumnos.dat, y lo lea.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

choice = 0;
FILE *fptr;

typedef struct {
    char nombre[20];
    float nota;
} alumnos_ej1;

struct alumnos_ej4 {
    char nombre[20];
    float nota;
};

int ejercicio1() {
    // no logre hacer que funcionara, ya estuve varias horas atascado en esto.
    alumnos_ej1 listaDeAlumnos[3];
    strcpy(listaDeAlumnos[0].nombre, "Michael");
    listaDeAlumnos[0].nota = 18;
    strcpy(listaDeAlumnos[1].nombre, "William");
    listaDeAlumnos[1].nota = 20;
    strcpy(listaDeAlumnos[2].nombre, "Elizabeth");
    listaDeAlumnos[2].nota = 14;
    fptr = fopen("alumno.bin", "wb");
    fwrite(listaDeAlumnos,sizeof(alumnos_ej1),3, fptr);

    alumnos_ej1 *read_struct = malloc(sizeof(alumnos_ej1)*3);
    rewind(fptr);
    fread(read_struct, sizeof(alumnos_ej1), 3, fptr);
    for (int i=0; i<3; i++) {
        printf("Alumno: %s\nNota: %.1f\n\n", read_struct[i].nombre, read_struct[i].nota);
    }
    fclose(fptr);
    free(read_struct);
}

int ejercicio2() {
    printf("Introduce un numero entero a guardar: ");
    scanf("%d", &choice);
    fptr = fopen("numero.bin", "wb");
    fwrite(choice, sizeof(int), 1, fptr);
    rewind(fptr);

    int *readint = malloc(sizeof(int));

    fread(&readint, sizeof(int), 1, fptr);
    printf("El numero dentro del archivo es %d.",*readint);
    free(readint);
}

int ejercicio3() {
    // SIN TERMINAR

}

int ejercicio4() {
    // SIN TERMINAR

}

int main() {
    printf("Elije cual ejercicio correr:\n1. Guarda un array de 3 estructuras alumno (nombre, nota) en binario, y leela.\n2. Guarda un numero entero (int) en un archivo binario numero.bin, y leelo.\n3. Copia el contenido de un origen.txt a copia.txt, y verifica si existe antes de copiar.\n4. Defina una estructura Alumno con nombre, edad, y promedio; guarda un array de 3 alumnos en alumnos.dat, y leela.\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
    ejercicio1();
        break;
    case 2:
    ejercicio2();
        break;
    case 3:
    ejercicio3();
        break;
    case 4:
    ejercicio4();
        break;
    }
}
