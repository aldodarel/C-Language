#include <stdio.h>

int main() {
    int choiceA, choiceB, choiceC;

    // Inputan A
    printf("Input A (masukkan nilai 1): ");
    scanf("%d", &choiceA);

    if (choiceA == 1) {
        // Inputan B
        do {
            printf("Input B (masukkan nilai 1): ");
            scanf("%d", &choiceB);

            if (choiceB != 1) {
                printf("Input B salah. Silakan coba lagi.\n");
            }
        } while (choiceB != 1);

        // Inputan C
        do {
            printf("Input C (masukkan nilai 1) atau 0 untuk kembali ke B: ");
            scanf("%d", &choiceC);

            if (choiceC == 0) {
                // Kembali ke inputan B
                printf("Kembali ke Inputan B...\n");
                continue;
            }
            
            if (choiceC != 1) {
                printf("Input C salah. Silakan coba lagi.\n");
            }
        } while (choiceC != 1);
    }
    else {
        printf("Input A salah. Program berhenti.\n");
    }

    printf("Terima kasih. Program selesai.\n");

    return 0;
}

