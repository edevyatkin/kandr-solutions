/* Задача 1.13 */

#include <stdio.h>

int main()
{
    int c, i, j;
    int ndigit[10];
    int nlchar[26];
    int ncchar[26];
    
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    
    for (i = 0; i < 26; ++i) {
        nlchar[i] = 0;
        ncchar[i] = 0;
    }
    
    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c >= 'a' && c <= 'z')
            ++nlchar[c-'a'];
        else if (c >= 'A' && c <= 'Z')
            ++ncchar[c-'A'];
    
    for (i = 0; i < 10; ++i) {
        int num = ndigit[i];
        if (num > 0) {
            printf("%2d ", i);
            for (j = 0; j < num; j++)
                putchar('|');
            printf("%d\n", num);
        }
    }
        
    for (i = 0; i < 26; ++i) {
        int num = nlchar[i];
        if (num > 0) {
            printf("%2c ", i+'a');
            for (j = 0; j < num; j++)
                putchar('|');
            printf("%d\n", num);
        }
    }
    
    for (i = 0; i < 26; ++i) {
        int num = ncchar[i];
        if (num > 0) {
            printf("%2c ", i+'A');
            for (j = 0; j < num; j++)
                putchar('|');
            printf("%d\n", num);
        }
    }
    
    return 0;
}
