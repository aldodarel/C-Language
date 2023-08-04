#include <stdio.h>
#include <ctype.h>

void toTitleCase(char* str) {
    int capitalizeNext = 1; // Indikator untuk mengkapitalisasi karakter berikutnya

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            capitalizeNext = 1; // Jika karakter spasi, atur indikator untuk mengkapitalisasi karakter berikutnya
        } else {
            if (capitalizeNext) {
                str[i] = toupper(str[i]); // Mengkapitalisasi karakter saat indikator menyala
                capitalizeNext = 0;
            } else {
                str[i] = tolower(str[i]); // Mengubah karakter lainnya menjadi huruf kecil
            }
        }
    }
}

void toSentenceCase(char* str) {
    str[0] = toupper(str[0]); // Mengkapitalisasi karakter pertama

    for (int i = 1; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]); // Mengubah karakter lainnya menjadi huruf kecil
    }
}

int main() {
    char str[] = "SeLamAT PAGi semua halOo";

    printf("Input: %s\n", str);

    // Mengubah format menjadi judul
    toTitleCase(str);
    printf("Title Case: %s\n", str);

    // Mengubah format menjadi kalimat biasa
    toSentenceCase(str);
    printf("Sentence Case: %s\n", str);

    return 0;
}


