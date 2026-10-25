
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum operasi {tambah, kurang, kali, bagi};

int main() {
    int skor = 0, a, b, jawaban, input;
    char simbol;

    srand(time(NULL));

    printf("=== Si Pintar Berhitung ===\n");

    for (int i = 0; i < 5; i++) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;

        switch (rand() % 3) {
            case 0:
                simbol = '+';
                jawaban = a + b;
                break;

            case 1:
                if (a < b) {
                    int t = a;
                    a = b;
                    b = t;
                }
                simbol = '-';
                jawaban = a - b;
                break;

            default:
                simbol = '*';
                jawaban = a * b;
                break;
        }

        printf("Soal %d: %d %c %d = ",
               i, a, simbol, b);

        scanf("%d", &input);

        if (input == jawaban) {
            printf("Benar!\n");
            skor++;
        } else {
            printf("Salah! Jawaban yang benar: %d\n",
                   jawaban);
        }
    }

    printf("\nSkor kamu: %d dari 5\n", skor);

    return 0;
}

