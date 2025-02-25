#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    int n, i;
    n = 15;
    printf("Indexaremos los siguientes elementos: %d\n", n);
    ptr = (int*)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("No se pudieron alocar %d bytes de memoria.\n", n*sizeof(int));
    }
    else {printf("Alocados %d bytes de memoria.\n", n*sizeof(int));
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }

        printf("\nElementos de la lista: ");
        for (i = 0; i < n; ++i) {
            printf("%d", ptr[i]);
            if (i+1<n) {printf(", ");} else {printf(".\n\n");}
        }
    }
    free(ptr);
    printf("Puntero liberado.\n", n*sizeof(int));
}
