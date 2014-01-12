/* 1.9. Массивы символов */

#include <stdio.h>
#define MAXLINE 1000    /* максимальная длина строки в потоке */

int getline_lim(char line[], int maxline);
void copy(char to[], char from[]);

/* вывод самой длинной строки в потоке */
int main()
{
    int len;                /* длина текущей строки */
    int max;                /* текущая максимальная длина */
    char line[MAXLINE];     /* текущая введенная строка */
    char longest[MAXLINE];  /* самая длинная строка из введенных */
    
    max = 0;
    while ((len = getline_lim(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
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
