/* 1.10. Массивы символов */

/* Задача 1.20 */

#include <stdio.h>
#define MAXLINE 1000    /* максимальная длина строки в потоке */
#define COLS 8 

int getline_lim(char line[], int maxline);
void detab(char s[]);

/*  */
int main()
{
    char s[MAXLINE];
    
    while (getline_lim(s,MAXLINE) > 0) {
        detab(s);
        printf("%s", s);
    }
    
    return 0;
}

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

void detab(char s[])
{
    int i, spaces;
    i = spaces = 0;
    
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
