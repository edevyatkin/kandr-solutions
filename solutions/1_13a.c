/* Задача 1.13 */

#include <stdio.h>

#define IN          1   /* внутри слова */
#define OUT         0   /* вначале слова */
#define MAXCHARS    10  /* максимальное количество символов в слове */

int main()
{
    int c, i, j, state, nchars;
    int nwords[MAXCHARS];
    
    nchars = 0;
    
    for (i = 0; i < MAXCHARS; ++i)
        nwords[i] = 0;
        
    while ((c = getchar()) != EOF) {
         if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                if (nchars <= MAXCHARS)
                    ++nwords[nchars-1];
                nchars = 0;
            }
            state = OUT;
        }
        else {
            ++nchars;
            state = IN;
        }
    }
    
    for (i = 0; i < MAXCHARS; ++i) {
        printf("%3d ", i+1);
        int num = nwords[i];
        for (j = 0; j < num; j++)
        {
            putchar('|');
        }
        printf("%d\n", num);
    }
    
    return 0;
}

