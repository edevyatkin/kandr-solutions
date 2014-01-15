/* 1.9. Массивы символов */

/* Задача 1.18 */

#include <stdio.h>
#define MAXLINE 10     /* максимальная длина строки в потоке */
#define CAPACITY 100  /* емкость буфера (принимается большей, чем MAXLINE) */

int getline_lim(char line[], int maxline);
void copy(char to[], char from[]);

/* удаление в конце каждой строки пробелов и табуляций. удаление пустых строк */
int main()
{
    char line[MAXLINE];     /* текущая введенная строка */
    char buffer[CAPACITY];  /* буфер для сохранения обработанных строк входного потока */
    int i;  
    int pos;                /* позиция в буфере, отражает заполненность */   
    
    i = pos = 0;               
    
    while ((getline_lim(line, MAXLINE)) > 0) {
        i = 0;
        while ((buffer[pos] = line[i]) != '\0')
        {
            if (buffer[pos] == '\n') {
                while (buffer[pos-1] == '\n' 
                    || buffer[pos-1] == '\t' 
                    || buffer[pos-1] == ' ')
                        --pos;
                buffer[pos] = '\n';
            }
            if (pos == CAPACITY-2) { /* сбрасываем буфер */
                buffer[CAPACITY-1] = '\0';
                printf("-----\n");
                printf("Обработанные строки\n");
                printf("-----\n");
                printf("%s\n", buffer);
                printf("-----\n");
                pos = 0;
            }
            else
                ++pos;
            ++i;
        }
    }
    
    buffer[pos+1] = '\0';
    printf("Остаток: %s\n", buffer); /* сбрасываем буфер */

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
