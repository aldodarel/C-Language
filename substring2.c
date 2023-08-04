#include <stdio.h>
#include <string.h>

void printSubstringLengths(char* str) {
    int length = strlen(str);
    int count = 1;

printf("Input = %s\n", str);

for (int i = 0; i < length; i++) {

// Jika karakter saat ini sama dengan karakter berikutnya, increment count
if(str[i] == str[i+1]) {
    count++;
} else {
    // Jika karakter saat ini berbeda dengan karakter berikutnya,
     // cetak panjang substring dan reset count ke 1
     printf("%c = %d\n", str[i], count);
     count = 1;
        }
    }
}

int main(){
    char str[] = "abab777yyeuuu";

    printSubstringLengths(str);

    return 0; 

}