#include <stdio.h>

int main(){
    int num = 5;

    while (num > 0){
        if(num == 1) 
            break; // to stop the execution
        printf("%d\n", num);
        num--;
    }
    return 0;
}