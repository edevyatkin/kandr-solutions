#include <stdio.h>

/* 1.5.1. Копирование входного потока в выходной 
 * вторая версия */

int main()
{
    int c;
    
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    
    return 0;
}
