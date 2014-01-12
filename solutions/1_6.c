#include <stdio.h>

/* 1.5.1. Копирование входного потока в выходной 
 * вторая версия 
 * 
 * Задача 1.6 */

int main()
{
    int c, res;
    
    while (res = ((c = getchar()) != EOF)) {
        putchar(c);
        printf("%d\n", res);
    }
    printf("%d\n", res);
    
    return 0;
}
