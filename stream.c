#include <stdio.h>

/* 1.5.1. Копирование входного потока в выходной */

int main()
{
    int c;
    
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    
    return 0;
}

