#include "main.h"
/*
 * print_triangle - fuction that prints a triangle.
 * @int
 * return nothing.
*/
void print_triangle(int size){
    int a, b, c;
    if(size <= 0){
        _putchar('\n');
    } else{
        for(a = 1; a <= size; a++){
            for(b = size - a; b >= 1; b--){
                _putchar(32);
            }
        for(c = 1; c <= a; c++){
            _putchar(35);
        }                
        _putchar('\n');
        }
    }
}