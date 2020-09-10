#include <stdio.h>

main() {

    int i, number;

    printf("Write a integer number: ");
    scanf("%d", &number);

    for(i = 1 ; i<=number ; i++){

        if((i%3 == 0) || (i%5 == 0)) {
            if((i%3 == 0) && (i%5 == 0)) {
                printf(" lucky ");
            }
            else{
                if(i%3 == 0){
                    if(i == 3){
                        printf(" fizz fizz ");
                    }
                    else {
                        printf(" fizz ");
                    }
                }
                else {
                    if(i == 5){
                        printf(" buzz buzz ");
                    }
                    else {
                        printf(" buzz ");
                    }
                }
            }
        }
        else {
            printf(" %d ", i);
        }
    }
}
