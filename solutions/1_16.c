/* 1.9. Массивы символов */

/* Задача 1.16 */

#include <stdio.h>
#define MAXLINE 20    /* максимальная длина строки в потоке */

int getline_lim(char line[], int maxline);
void copy(char to[], char from[]);

/* вывод самой длинной строки в потоке */
int main()
{
    int len;                /* длина текущей строки */
    int fulllen;            /* общая длина строки */
    int max;                /* текущая максимальная длина */
    char line[MAXLINE];     /* текущая введенная строка */
    char linehead[MAXLINE]; /* начало строки */
    char longest[MAXLINE];  /* самая длинная строка из введенных */
    
    max = fulllen = 0;
    while ((len = getline_lim(line, MAXLINE)) > 0) {
        if (fulllen == 0)
            copy(linehead, line);
            
        fulllen = fulllen + len;
        
        if (line[len-1] == '\n') {
            if (fulllen > max) {
                max = fulllen;
                copy(longest, linehead);
            }
            fulllen = 0;
        }
    }
    if (max > 0)    /* была непустая строка */
        printf("%s", longest);
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
