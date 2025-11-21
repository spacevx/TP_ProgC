#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = 5;

    for (int n = 0; n < taille; n++) {

        int x = nombres[n];
        printf("Nombre : %d → binaire : ", x);

        for (int i = 31; i >= 0; i--) {
            int bit = (x >> i) & 1;
            printf("%d", bit);

            if (i % 4 == 0) printf(" ");
        }

        printf("\n\n");
    }

    return 0;
}
