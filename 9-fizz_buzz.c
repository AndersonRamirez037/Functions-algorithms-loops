#include <stdio.h>
/*
 * program that prints the numbers from 1 to 100 with the "Fizz-Buzz test".
 * 
 * return 0.
*/
int main(){
    int i;
    for(i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 5 == 0){
            printf("FizzBuzz ");
            continue;
        } else if (i % 3 == 0){
            printf("Fizz ");
            continue;
        } else if(i % 5 == 0){
            printf("Buzz ");
            continue;
        } else{
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
