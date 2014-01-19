/* 1.10. Массивы символов */

/* Задача 1.20 */

#include <stdio.h>
#define MAXLINE 1000    /* максимальная длина строки в потоке */
#define COLS 8 

/*  */
int main()
{
    int i;
    int spaces;
    char c;
    
    i = spaces = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            spaces = (i/COLS + 1)*COLS - i;
            while (spaces > 0) {
                putchar(' ');
                ++i;
                --spaces;
            }
        }
        else {
            putchar(c);
            ++i;
        }
    }
    
    return 0;
}

void detab(char s[])
{
    int i;
    i = 0;
    
    while (s[i] != '\0') {
        if (s[i] == '\t') {
            spaces = (i/COLS + 1)*COLS - i;
            while (spaces > 0) {
                s[i] = ' ';
                ++i;
                --spaces;
            }
        }
        else 
            ++i;
    }
}
