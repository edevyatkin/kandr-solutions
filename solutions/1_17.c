/* 1.9. Массивы символов */

/* Задача 1.17 */

#include <stdio.h>
#define MAXLINE 10      /* максимальная длина строки в потоке */
#define LENGTH  80      /* требуемая длина строки */

int getline_lim(char line[], int maxline);
void copy(char to[], char from[]);

/* вывод строки, длиннее заданного количества символов */
int main()
{
    char line[MAXLINE];     /* текущая введенная строка */
    char buffer[LENGTH];    /* буфер для сохранения строки */
    int i,p;
    
    i = p = 0;
    
    while (getline_lim(line, MAXLINE) > 0) {
        i = 0;
        while ((buffer[p] = line[i]) != '\0') {
            if (line[i] == '\n') {
                p = 0;
            }
            else 
            if (p == LENGTH-2) {
                buffer[LENGTH-1] = '\0';
                printf("Строка > %d: %s\n", LENGTH, buffer);
                p = 0;
            }
            else
                ++p;
            ++i;
        }
    }

    return 0;
}

/* getline: считывает строку в s, возвращает её длину */
int getline_lim(char s[], int lim)
{
    int c, i;
    
    for (i = 0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: копирует строку from в to;
 * длина to считается достаточной */
void copy(char to[], char from[])
{
    int i;
    
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
