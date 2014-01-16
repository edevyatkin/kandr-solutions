/* 1.9. Массивы символов */

/* Задача 1.19 */

#include <stdio.h>
#define MAXLINE 1000     /* максимальная длина строки в потоке */

int getline_lim(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char s[]);

/* вывод строк входного потока по одной, с символами в обратном порядке */
int main()
{
    char line[MAXLINE];
    
    while ((getline_lim(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s", line);
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

void reverse(char s[])
{
    char c;
    int i, j;
    
    i = j = 0;
    
    while (s[j] != '\0')
        ++j;
    
    if (s[j-1] == '\n')
        j = j-2;
    else
        j = j-1;
    
    while (i < j) {
        c = s[j];
        s[j] = s[i];
        s[i] = c;
        ++i;
        --j;
    }
}
