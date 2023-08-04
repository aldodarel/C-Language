#include <stdio.h>

int main() {
    int y;
    int x = 3;

    y = (x >= 5) ? 5 : x;

    printf("%d\n", y);

    return 0;

    /* This is equivalent to:
    if(x>=5){
        y = 5;
    else
        y = x;
    */
}

// sololearn
