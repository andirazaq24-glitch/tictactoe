
#include <stdio.h>
#include <stdlib.h>

char C[3][3] = {{'1', '2', '3'},{'4', '5', '6'},{'7', '8', '9'}};

int main() {
    int baris, kolom, nomor;
    char pemain = 'X';

    for (int langkah = 0; langkah < 9; langkah++) {
        for (baris = 0; baris < 3; baris++) {
            for (kolom = 0; kolom < 3; kolom++) {
                printf("%c ", C[baris][kolom]);
            }
            printf("\n");
        }

        printf("Giliran %c, pilih kotak (1-9): ", pemain);
        scanf("%d", &nomor);

        baris = (nomor - 1) / 3;
        kolom = (nomor - 1) % 3;

        C[baris][kolom] = pemain;

        if (pemain == 'X') {
            pemain = 'O';
        } else {
            pemain = 'X';
        }
    }

    for (baris = 0; baris < 3; baris++) {
        for (kolom = 0; kolom < 3; kolom++) {
            printf("%c ", C[baris][kolom]);
        }
        printf("\n");
    }

    return 0;
}
