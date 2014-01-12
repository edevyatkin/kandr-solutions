/* Задача 1.13 */

#include <stdio.h>

#define IN          1   /* внутри слова */
#define OUT         0   /* вначале слова */
#define MAXCHARS    10  /* максимальное количество символов в слове */

int main()
{
    int c, i, j, max, state, nchars;
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
    
    max = 0;
    
    for (i = 0; i < MAXCHARS; ++i) {
        if (nwords[i] > max) {
            max = nwords[i];
        }
    }
    
    for (i = max+1; i >0; i--) {
       for (j = 0; j < MAXCHARS; j++) {
            if (i <= nwords[j]) {
                printf(" -- ");
            }
            else
            if (i == nwords[j]+1)
                printf(" %2d ", nwords[j]);
            else
                printf("    ");
        }
        putchar('\n');
    }
    
    for (i = 0; i < MAXCHARS; ++i)
        printf("----");
    
    putchar('\n');
    
    for (i = 0; i < MAXCHARS; ++i)
        printf(" %2d ", i+1);
    
    return 0;
}

