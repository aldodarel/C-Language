

#include <stdio.h>

int data[6] = {6, 7, 2, 15, 17, 1};
int n = 6;

int a(int output) {
    for (int i = 0; i < n; i++) {
        if (output == data[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    printf("%d\n", a(200));
    return 0;
}
