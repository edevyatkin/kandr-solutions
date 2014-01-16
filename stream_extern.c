/* 1.10. Внешние переменные */

#include <stdio.h>
#define MAXLINE 1000    /* максимальная длина строки в потоке */

int max;                /* текущая максимальная длина */

char line[MAXLINE];     /* текущая введенная строка */
char longest[MAXLINE];  /* самая длинная строка из введенных */

int getline_lim(void);
void copy(void);

/* вывод самой длинной строки в потоке 
 * специальная версия */
int main()
{
    int len;
    extern int max;
    extern char longest[];
    
    max = 0;
    while ((len = getline_lim()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0)    /* была непустая строка */
        printf("%s", longest);
    return 0;
}

/* getline: считывает строку, возвращает её длину
 * специальная версия */
int getline_lim(void)
{
    int c, i;
    extern char line[];
    
    for (i = 0; i<MAXLINE-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* copy: копирует строку
 * специальная версия */
void copy(void)
{
    int i;
    extern char line[], longest[];
    
    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}
