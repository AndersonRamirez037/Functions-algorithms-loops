#include "main.h"
/*
 * print_line - function that draws a straight line.
 * @int
 * return nothing 
*/
void print_line(int n){
    int i = 1;
    if(n <= 0){
        _putchar('\n');    
    } else{
        for(i = 1; i <= n; i++){
            _putchar(95);
        }
        _putchar('\n');
    }
}