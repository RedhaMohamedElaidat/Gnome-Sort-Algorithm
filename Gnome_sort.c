#include <stdio.h>  // Pour printf et scanf
#include <stdlib.h> // Pour malloc, free, rand
#include <time.h>   // Pour clock
#include <math.h>   // Pour des fonctions mathématiques si nécessaire

typedef int *array;
array T;

/******************** The Function Gnome sort *********************/
void GnomeSort(int *T, int n) {
    int i = 0, temp;
    while (i < n) {
        if (i == 0 || T[i] <= T[i + 1]) {
            i++;
        } else {
            temp = T[i];
            T[i] = T[i + 1];
            T[i + 1] = temp;
            i--;
        }
    }
}

int main() {
    int n, i;
    float t;
    clock_t t1, t2;
    printf("\n\t\t\t Gnome sort ALGORITHM \t\t\t");
    printf("\n------------------------------------------------------");
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    T = (int *)malloc(n * sizeof(int));
    printf("\nArray before sorting: \n");
    for (i = 0; i < n; i++) {
        T[i] = rand();
        printf("%d ", T[i]);
    }
    t1 = clock();
    GnomeSort(T, n);
    t2 = clock();
    printf("\nArray after sorting: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    t = (double)(t2 - t1) / CLOCKS_PER_SEC;
    printf("\n\nExecution time: %f seconds", t);
    free(T);
    return 0;
}
